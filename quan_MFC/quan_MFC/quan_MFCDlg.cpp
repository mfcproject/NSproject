
// quan_MFCDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "quan_MFC.h"
#include "quan_MFCDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Cquan_MFCDlg �Ի���



Cquan_MFCDlg::Cquan_MFCDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(Cquan_MFCDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Cquan_MFCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON1, m_btButton1);
	DDX_Control(pDX, IDC_BUTTON2, m_btButton2);
	DDX_Control(pDX, IDC_BUTTON3, m_btButton3);
	DDX_Control(pDX, IDC_BUTTON4, m_btButton4);
	DDX_Control(pDX, IDC_BUTTON5, m_btButton5);
	DDX_Control(pDX, IDC_BUTTON6, m_btButton6);
	DDX_Control(pDX, IDC_BUTTON7, m_btButton7);
}

BEGIN_MESSAGE_MAP(Cquan_MFCDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_TIMER()
	ON_WM_DRAWITEM()
	ON_WM_CTLCOLOR()
END_MESSAGE_MAP()


// Cquan_MFCDlg ��Ϣ�������

BOOL Cquan_MFCDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������
	SetTimer(1, 100, NULL);


	m_btButton1.LoadBitmaps(IDB_BITMAP25, IDB_BITMAP24, IDB_BITMAP23);   //����   
	m_btButton1.SizeToContent();  //ʹ��ť��ӦͼƬ��С  
	m_btButton2.LoadBitmaps(IDB_BITMAP12, IDB_BITMAP11, IDB_BITMAP10);   //����   
	m_btButton2.SizeToContent();  //ʹ��ť��ӦͼƬ��С  
	m_btButton3.LoadBitmaps(IDB_BITMAP22, IDB_BITMAP21, IDB_BITMAP20);   //����   
	m_btButton3.SizeToContent();  //ʹ��ť��ӦͼƬ��С  
	m_btButton4.LoadBitmaps(IDB_BITMAP28, IDB_BITMAP27, IDB_BITMAP26);   //����   
	m_btButton4.SizeToContent();  //ʹ��ť��ӦͼƬ��С  
	m_btButton5.LoadBitmaps(IDB_BITMAP3, IDB_BITMAP2, IDB_BITMAP1);   //����   
	m_btButton5.SizeToContent();  //ʹ��ť��ӦͼƬ��С  
	m_btButton6.LoadBitmaps(IDB_BITMAP9, IDB_BITMAP8, IDB_BITMAP7);   //����   
	m_btButton6.SizeToContent();  //ʹ��ť��ӦͼƬ��С  
	m_btButton7.LoadBitmaps(IDB_BITMAP17, IDB_BITMAP16, IDB_BITMAP15);   //����   
	m_btButton7.SizeToContent();  //ʹ��ť��ӦͼƬ��С  


	

	//ModifyStyle(WS_CAPTION, 0, 0);  // ���ֻ��Ҫ��ͨ��ȫ��������ȥ�����������Ͳ��õ�һ�����
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);


	

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void Cquan_MFCDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void Cquan_MFCDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������
		//��ӱ���ͼƬ

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{

		CStatic* title1 = (CStatic*)GetDlgItem(IDC_STATIC);
		title1->ModifyStyle(0, SS_BITMAP);
		CBitmap bitmap1;
		bitmap1.LoadBitmap(IDB_BITMAP19);
		title1->SetBitmap(bitmap1);

		CStatic* title2 = (CStatic*)GetDlgItem(IDC_STATIC_Online);
		title2->ModifyStyle(0, SS_BITMAP);
		CBitmap bitmap2;
		bitmap2.LoadBitmap(IDB_BITMAP14);
		title2->SetBitmap(bitmap2);

		CStatic* title3 = (CStatic*)GetDlgItem(IDC_STATIC_Name);
		title3->ModifyStyle(0, SS_BITMAP);
		CBitmap bitmap3;
		bitmap3.LoadBitmap(IDB_BITMAP5);
		title3->SetBitmap(bitmap3);


		
		CPaintDC   dc(this);
		CRect   rect;
		GetClientRect(&rect);                                 
		CDC   dcBmp;                                          
		dcBmp.CreateCompatibleDC(&dc);                        
		CBitmap   bmpBackground;
		bmpBackground.LoadBitmap(IDB_BITMAP4);                
		BITMAP   m_bitmap;                                    
		bmpBackground.GetBitmap(&m_bitmap);                   
		CBitmap   *pbmpOld = dcBmp.SelectObject(&bmpBackground);
		 
		dc.SetStretchBltMode(COLORONCOLOR);
		dc.StretchBlt(0, 0, rect.Width(), rect.Height(), &dcBmp, 0, 0,
			m_bitmap.bmWidth, m_bitmap.bmHeight, SRCCOPY);



	}
	
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR Cquan_MFCDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}




void Cquan_MFCDlg::OnTimer(UINT_PTR nIDEvent)
{
	 //TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ   
	if (1 == nIDEvent)
	{
		POINT p;
		GetCursorPos(&p);
		CWnd *hwnd;
		hwnd = WindowFromPoint(p);        //���������а���ָ���ĵ�;�����ָ����Ļ��������Ļ�ϵ�һ���㡣   
		CWnd *hwnd1 = GetDlgItem(IDC_BUTTON1);
		CWnd *hwnd2 = GetDlgItem(IDC_BUTTON2);
		CWnd *hwnd3 = GetDlgItem(IDC_BUTTON3);
		CWnd *hwnd4 = GetDlgItem(IDC_BUTTON4);
		CWnd *hwnd5 = GetDlgItem(IDC_BUTTON5);
		CWnd *hwnd6 = GetDlgItem(IDC_BUTTON6);
		CWnd *hwnd7 = GetDlgItem(IDC_BUTTON7);
	
			if (hwnd1 == hwnd)         //�������ڰ�ť1��   
			{
				if (GetFocus() != hwnd1)        //�����ť1�޽��㣬��ô���ý���   
					hwnd1->SetFocus();
			}
			else          //�����겻�ڰ�ť1�ϣ�   
			{
				if (GetFocus() == hwnd1)                  //�����ť1�н��㣬��ôȥ���㣻   
					GetDlgItem(IDC_STATIC)->SetFocus();      //�����IDC_STATICΪ������ת���Ŀؼ�ID��   
			}




			if (hwnd2 == hwnd)         //�������ڰ�ť2��   
			{
				if (GetFocus() != hwnd2)        //�����ť2�޽��㣬��ô���ý���   
					hwnd2->SetFocus();
			}
			else          //�����겻�ڰ�ť2�ϣ�   
			{
				if (GetFocus() == hwnd2)                  //�����ť2�н��㣬��ôȥ���㣻   
					GetDlgItem(IDC_STATIC)->SetFocus();      //�����IDC_STATICΪ������ת���Ŀؼ�ID��   
			}




			if (hwnd3 == hwnd)         //�������ڰ�ť3��   
			{
				if (GetFocus() != hwnd3)        //�����ť3�޽��㣬��ô���ý���   
					hwnd3->SetFocus();
			}
			else          //�����겻�ڰ�ť3�ϣ�   
			{
				if (GetFocus() == hwnd3)                  //�����ť3�н��㣬��ôȥ���㣻   
					GetDlgItem(IDC_STATIC)->SetFocus();      //�����IDC_STATICΪ������ת���Ŀؼ�ID��   
			}




			if (hwnd4 == hwnd)         //�������ڰ�ť4��   
			{
				if (GetFocus() != hwnd4)        //�����ť4�޽��㣬��ô���ý���   
					hwnd4->SetFocus();
			}
			else          //�����겻�ڰ�ť4�ϣ�   
			{
				if (GetFocus() == hwnd4)                  //�����ť4�н��㣬��ôȥ���㣻   
					GetDlgItem(IDC_STATIC)->SetFocus();      //�����IDC_STATICΪ������ת���Ŀؼ�ID��   
			}




			if (hwnd5 == hwnd)         //�������ڰ�ť5��   
			{
				if (GetFocus() != hwnd5)        //�����ť5�޽��㣬��ô���ý���   
					hwnd5->SetFocus();
			}
			else          //�����겻�ڰ�ť5�ϣ�   
			{
				if (GetFocus() == hwnd5)                  //�����ť5�н��㣬��ôȥ���㣻   
					GetDlgItem(IDC_STATIC)->SetFocus();      //�����IDC_STATICΪ������ת���Ŀؼ�ID��   
			}




			if (hwnd6 == hwnd)         //�������ڰ�ť6��   
			{
				if (GetFocus() != hwnd6)        //�����ť6�޽��㣬��ô���ý���   
					hwnd6->SetFocus();
			}
			else          //�����겻�ڰ�ť�ϣ�   
			{
				if (GetFocus() == hwnd6)                  //�����ť6�н��㣬��ôȥ���㣻   
					GetDlgItem(IDC_STATIC)->SetFocus();      //�����IDC_STATICΪ������ת���Ŀؼ�ID��   
			}




			if (hwnd7 == hwnd)         //�������ڰ�ť7��   
			{
				if (GetFocus() != hwnd7)        //�����ť7�޽��㣬��ô���ý���   
					hwnd7->SetFocus();
			}
			else          //�����겻�ڰ�ť7�ϣ�   
			{
				if (GetFocus() == hwnd7)                  //�����ť7�н��㣬��ôȥ���㣻   
					GetDlgItem(IDC_STATIC)->SetFocus();      //�����IDC_STATICΪ������ת���Ŀؼ�ID��   
			}
		
	}
	CDialog::OnTimer(nIDEvent);
}




