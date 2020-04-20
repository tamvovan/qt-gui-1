#include "demoqtgui1.h"

demoqtgui1::demoqtgui1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	QRadioButton* radioBtn = new QRadioButton("Single image: Show acquired image in viewer", this);
	radioBtn->setGeometry(40, 40, 300, 20);
	radioBtn->setCheckable(true);
	
	QPushButton* selectTWAIN = new QPushButton("Select TWAIN Source", this);
	selectTWAIN->setGeometry(400, 40, 120, 20);
	
	QCheckBox* checkBox1 = new QCheckBox("Close TWAIN dialog after acquiring an image", this);
	checkBox1->setGeometry(60, 60, 70, 20);

	QRadioButton* radioBtn2 = new QRadioButton("Multiple images (Batch mode): Save arquired images as file ", this);
	radioBtn2->setGeometry(40, 90, 300, 20);
	radioBtn2->setCheckable(true);

	QLabel* label1 = new QLabel("Output file name:", this);
	label1->setGeometry(60, 120, 120, 20);
	QLineEdit* edit1 = new QLineEdit(this);
	edit1->setGeometry(180,120,200,20);

	QLabel* label2 = new QLabel("Starting counter:", this);
	label2->setGeometry(60, 150, 120, 20);
	QLineEdit* edit2 = new QLineEdit(this);
	edit2->setGeometry(180, 150, 200, 20);

	QLabel* label3 = new QLabel("Increment:", this);
	label3->setGeometry(60, 180, 120, 20);
	QLineEdit* edit3 = new QLineEdit(this);
	edit3->setGeometry(180, 180, 200, 20);

	QLabel* label4 = new QLabel("Number of digits:", this);
	label4->setGeometry(60, 210, 120, 20);
	QLineEdit* edit4 = new QLineEdit(this);
	edit4->setGeometry(180, 210, 200, 20);

	QCheckBox* checkBox2 = new QCheckBox("Skip existing files", this);
	checkBox2->setGeometry(180, 240, 240, 20);

	QCheckBox* checkBox3 = new QCheckBox("Remember last scan counter( set as start)", this);
	checkBox3->setGeometry(180, 260, 240, 20);

	QLabel* label5 = new QLabel("Destination folder:", this);
	label5->setGeometry(60, 280, 120, 20);
	QLineEdit* edit5 = new QLineEdit(this);
	edit5->setGeometry(180, 280, 200, 20);

	QPushButton* browserBtn = new QPushButton("Browser", this);
	browserBtn->setGeometry(480, 280, 80, 20);

	QLabel* label6 = new QLabel("Save as:", this);
	label6->setGeometry(180,310,50,20);

	QComboBox* comboBox = new QComboBox(this);
	comboBox->setGeometry(230, 310, 230, 20);
	comboBox->insertItem(0, "JPG - JPG/JPEG Format", QVariant());

	QPushButton* optionsBtn = new QPushButton("Options", this);
	optionsBtn->setGeometry(480, 310, 80, 20);

	QCheckBox* checkBox4 = new QCheckBox("Save as multiple images( only if saved as TIF or PDF)", this);
	checkBox4->setGeometry(230, 340, 280, 20);

	QPushButton* pushBtn2 = new QPushButton("OK", this);
	pushBtn2->setGeometry(220, 380, 80, 20);

	QPushButton* pushBtn3 = new QPushButton("Cancel", this);
	pushBtn3->setGeometry(360, 380, 80, 20);
}
