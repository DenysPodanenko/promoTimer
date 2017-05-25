#include "promotimer.h"

promoTimer::promoTimer(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	second = new QTimer();
	second->setInterval(1000);

	ui.sesionLength->setMinimum(1);
	ui.breakLength->setMinimum(1);
	min = 1;
	sec=0;

	whatFase = true;

	isAppOn = false;

	connect(ui.btnStart,SIGNAL(clicked()),this,SLOT(onOffApp()));
	connect(second,SIGNAL(timeout()),this,SLOT(changeTime()));

	connect(this,SIGNAL(sesionTimeEnd()),this,SLOT(breakBegin()));
	connect(this,SIGNAL(breakTimeEnd()),this,SLOT(sesionBegin()));

	connect(ui.sesionLength,SIGNAL(valueChanged(int)),this,SLOT(setTime(int)));
	connect(ui.breakLength,SIGNAL(valueChanged(int)),this,SLOT(setTime(int)));
}

promoTimer::~promoTimer()
{

}

void promoTimer::setTime(int i)
{
	if(whatFase)	
	{	
		min=ui.sesionLength->text().toInt();
		sec=0;
		if(sec<10)
			ui.timerText->setText(QString::number(min)+":0"+QString::number(sec));
		else
			ui.timerText->setText(QString::number(min)+":"+QString::number(sec));
	}
	else
	{
		min=ui.breakLength->text().toInt();
		sec=0;
		if(sec<10)
			ui.timerText->setText(QString::number(min)+":0"+QString::number(sec));
		else
			ui.timerText->setText(QString::number(min)+":"+QString::number(sec));
	}
}

void promoTimer::onOffApp()
{
	if(isAppOn)
	{
		isAppOn=false;
		ui.breakLength->setEnabled(true);
		ui.sesionLength->setEnabled(true);
		second->stop();
	}
	else
	{
		isAppOn=true;

		ui.breakLength->setDisabled(true);
		ui.sesionLength->setDisabled(true);
		second->start();
	}
}

void promoTimer::changeTime()
{
	
	if(sec == 0)
	{
		min--;
		sec=60;
	}
	
	sec--;
	if(sec<10)
		ui.timerText->setText(QString::number(min)+":0"+QString::number(sec));
	else
		ui.timerText->setText(QString::number(min)+":"+QString::number(sec));
	if(min == 0 && sec == 0)
	{
		if(whatFase)
			emit sesionTimeEnd();
		else
			emit breakTimeEnd();
	}
}

void promoTimer::breakBegin()
{
	second->stop();
	whatFase = false;

	min = ui.breakLength->text().toInt();
	sec=0;
	ui.timerText->setText(QString::number(min)+":"+QString::number(sec));
	second->start();
}

void promoTimer::sesionBegin()
{
	second->stop();
	whatFase = true;

	min = ui.sesionLength->text().toInt();
	sec=0;
	ui.timerText->setText(QString::number(min)+":"+QString::number(sec));
	second->start();
}