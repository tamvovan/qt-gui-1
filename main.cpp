#include "demoqtgui1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	demoqtgui1 w;
	w.setGeometry(0, 0, 620, 600);
	w.setWindowTitle("Acquire method:");
	w.show();
	return a.exec();
}
