
// quan_MFCDlg.h : ͷ�ļ�
//

#pragma once
#include "afxext.h"


// Cquan_MFCDlg �Ի���
class Cquan_MFCDlg : public CDialogEx
{
// ����
public:
	Cquan_MFCDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_QUAN_MFC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CBitmapButton m_btButton1;
	CBitmapButton m_btButton2;
	CBitmapButton m_btButton3;
	CBitmapButton m_btButton4;
	CBitmapButton m_btButton5;
	CBitmapButton m_btButton6;
	CBitmapButton m_btButton7;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};
