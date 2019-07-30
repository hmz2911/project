#include "mabaoTest.h"

mabaoTest::mabaoTest(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.actionopen,&QAction::triggered,this,&mabaoTest::OpenFileStirng);
}

void mabaoTest::OpenFileStirng()
{
	this->m_FileName = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Image Files(*.txt)"));
	ui.label_OpenFIleName->setText(m_FileName);
}

void mabaoTest::SetResultInfo(QString str)
{
	ui.label_OpenFIleName->setText(str);
}
