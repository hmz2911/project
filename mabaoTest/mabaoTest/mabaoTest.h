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
	void OpenFileStirng();//�����
	void SetResultInfo(QString str);//��ʾ�����Ϣ
	void GetResultDate();//��ȡ���������Ϣ 
};
