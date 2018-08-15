
// quan_MFCDlg.h : 头文件
//

#pragma once
#include "afxext.h"


// Cquan_MFCDlg 对话框
class Cquan_MFCDlg : public CDialogEx
{
// 构造
public:
	Cquan_MFCDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_QUAN_MFC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
