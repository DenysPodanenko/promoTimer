#ifndef PROMOTIMER_H
#define PROMOTIMER_H

#include <QtWidgets/QMainWindow>
#include <QTimer>
#include "ui_promotimer.h"

class promoTimer : public QMainWindow
{
	Q_OBJECT

public:
	promoTimer(QWidget *parent = 0);
	~promoTimer();

	bool whatFase;
	bool isAppOn;

	QTimer *second;

	int min;
	int sec;

private:
	Ui::promoTimerClass ui;

public slots:
	void setTime(int);
	void changeTime();

	void onOffApp();

	void breakBegin();
	void sesionBegin();
signals:
	void sesionTimeEnd();
	void breakTimeEnd();
};

#endif // PROMOTIMER_H
