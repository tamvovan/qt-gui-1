#pragma once

#include <QtWidgets/QMainWindow>
#include <QRadioButton>
#include <QPushButton>
#include <QCheckBox>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QWidget>
#include "ui_demoqtgui1.h"

class demoqtgui1 : public QMainWindow
{
	Q_OBJECT

public:
	demoqtgui1(QWidget *parent = Q_NULLPTR);

private:
	Ui::demoqtgui1Class ui;
};
