#include "Base.h"

CBase::CBase()
{
	Q_FileName = "";
}


CBase::~CBase()
{
}

QString CBase::GetFileName()
{
	return Q_FileName;
}

void CBase::SetFileName(QString str)
{
	this->Q_FileName = str;
}

