#ifndef SCALESMANAGER_H
#define SCALESMANAGER_H

#include <QtWidgets/QMainWindow>
#include "ui_scalesmanager.h"

class ScalesManager : public QMainWindow
{
	Q_OBJECT

public:
	ScalesManager(QWidget *parent = 0);
	~ScalesManager();

private:
	Ui::ScalesManagerClass ui;
};

#endif // SCALESMANAGER_H
