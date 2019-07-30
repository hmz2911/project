#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mabaoTest.h"
#include "Base.h"
class mabaoTest : public QMainWindow,public CBase
{
    Q_OBJECT

public:
    mabaoTest(QWidget *parent = Q_NULLPTR);

private:
    Ui::mabaoTestClass ui;
	QString m_FileName;
public slots:
	void OpenFileStirng();//打开码包
	void SetResultInfo(QString str);//显示结果信息
	void GetResultDate();//获取少量结果信息 
};
