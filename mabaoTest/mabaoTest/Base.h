#ifndef CBASE_HHHHH
#define CBASE_HHHHH

#include "header.h"
class CBase
{
public:
	CBase();
	~CBase();
private:
	QString Q_FileName;//�ļ���
public:
	QString GetFileName();
	void SetFileName(QString str);
};
#endif
