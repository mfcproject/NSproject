
// quan_MFC.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cquan_MFCApp: 
// �йش����ʵ�֣������ quan_MFC.cpp
//

class Cquan_MFCApp : public CWinApp
{
public:
	Cquan_MFCApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cquan_MFCApp theApp;