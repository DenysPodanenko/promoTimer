#include "promotimer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	promoTimer w;
	w.show();
	return a.exec();
}
