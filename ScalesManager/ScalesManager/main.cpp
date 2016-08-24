#include "scalesmanager.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ScalesManager w;
	w.show();
	return a.exec();
}
