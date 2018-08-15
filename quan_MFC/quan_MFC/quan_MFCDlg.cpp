
// quan_MFCDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "quan_MFC.h"
#include "quan_MFCDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
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


// Cquan_MFCDlg 对话框



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


// Cquan_MFCDlg 消息处理程序

BOOL Cquan_MFCDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
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

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码
	SetTimer(1, 100, NULL);


	m_btButton1.LoadBitmaps(IDB_BITMAP25, IDB_BITMAP24, IDB_BITMAP23);   //载入   
	m_btButton1.SizeToContent();  //使按钮适应图片大小  
	m_btButton2.LoadBitmaps(IDB_BITMAP12, IDB_BITMAP11, IDB_BITMAP10);   //载入   
	m_btButton2.SizeToContent();  //使按钮适应图片大小  
	m_btButton3.LoadBitmaps(IDB_BITMAP22, IDB_BITMAP21, IDB_BITMAP20);   //载入   
	m_btButton3.SizeToContent();  //使按钮适应图片大小  
	m_btButton4.LoadBitmaps(IDB_BITMAP28, IDB_BITMAP27, IDB_BITMAP26);   //载入   
	m_btButton4.SizeToContent();  //使按钮适应图片大小  
	m_btButton5.LoadBitmaps(IDB_BITMAP3, IDB_BITMAP2, IDB_BITMAP1);   //载入   
	m_btButton5.SizeToContent();  //使按钮适应图片大小  
	m_btButton6.LoadBitmaps(IDB_BITMAP9, IDB_BITMAP8, IDB_BITMAP7);   //载入   
	m_btButton6.SizeToContent();  //使按钮适应图片大小  
	m_btButton7.LoadBitmaps(IDB_BITMAP17, IDB_BITMAP16, IDB_BITMAP15);   //载入   
	m_btButton7.SizeToContent();  //使按钮适应图片大小  


	

	//ModifyStyle(WS_CAPTION, 0, 0);  // 如果只是要普通的全屏，不想去掉标题栏，就不用第一个语句
	SendMessage(WM_SYSCOMMAND, SC_MAXIMIZE, 0);


	

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void Cquan_MFCDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文
		//添加背景图片

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
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

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR Cquan_MFCDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}




void Cquan_MFCDlg::OnTimer(UINT_PTR nIDEvent)
{
	 //TODO: 在此添加消息处理程序代码和/或调用默认值   
	if (1 == nIDEvent)
	{
		POINT p;
		GetCursorPos(&p);
		CWnd *hwnd;
		hwnd = WindowFromPoint(p);        //检索窗口中包含指定的点;点必须指定屏幕坐标在屏幕上的一个点。   
		CWnd *hwnd1 = GetDlgItem(IDC_BUTTON1);
		CWnd *hwnd2 = GetDlgItem(IDC_BUTTON2);
		CWnd *hwnd3 = GetDlgItem(IDC_BUTTON3);
		CWnd *hwnd4 = GetDlgItem(IDC_BUTTON4);
		CWnd *hwnd5 = GetDlgItem(IDC_BUTTON5);
		CWnd *hwnd6 = GetDlgItem(IDC_BUTTON6);
		CWnd *hwnd7 = GetDlgItem(IDC_BUTTON7);
	
			if (hwnd1 == hwnd)         //如果鼠标在按钮1上   
			{
				if (GetFocus() != hwnd1)        //如果按钮1无焦点，那么设置焦点   
					hwnd1->SetFocus();
			}
			else          //如果鼠标不在按钮1上；   
			{
				if (GetFocus() == hwnd1)                  //如果按钮1有焦点，那么去焦点；   
					GetDlgItem(IDC_STATIC)->SetFocus();      //这里的IDC_STATIC为你想跳转到的控件ID号   
			}




			if (hwnd2 == hwnd)         //如果鼠标在按钮2上   
			{
				if (GetFocus() != hwnd2)        //如果按钮2无焦点，那么设置焦点   
					hwnd2->SetFocus();
			}
			else          //如果鼠标不在按钮2上；   
			{
				if (GetFocus() == hwnd2)                  //如果按钮2有焦点，那么去焦点；   
					GetDlgItem(IDC_STATIC)->SetFocus();      //这里的IDC_STATIC为你想跳转到的控件ID号   
			}




			if (hwnd3 == hwnd)         //如果鼠标在按钮3上   
			{
				if (GetFocus() != hwnd3)        //如果按钮3无焦点，那么设置焦点   
					hwnd3->SetFocus();
			}
			else          //如果鼠标不在按钮3上；   
			{
				if (GetFocus() == hwnd3)                  //如果按钮3有焦点，那么去焦点；   
					GetDlgItem(IDC_STATIC)->SetFocus();      //这里的IDC_STATIC为你想跳转到的控件ID号   
			}




			if (hwnd4 == hwnd)         //如果鼠标在按钮4上   
			{
				if (GetFocus() != hwnd4)        //如果按钮4无焦点，那么设置焦点   
					hwnd4->SetFocus();
			}
			else          //如果鼠标不在按钮4上；   
			{
				if (GetFocus() == hwnd4)                  //如果按钮4有焦点，那么去焦点；   
					GetDlgItem(IDC_STATIC)->SetFocus();      //这里的IDC_STATIC为你想跳转到的控件ID号   
			}




			if (hwnd5 == hwnd)         //如果鼠标在按钮5上   
			{
				if (GetFocus() != hwnd5)        //如果按钮5无焦点，那么设置焦点   
					hwnd5->SetFocus();
			}
			else          //如果鼠标不在按钮5上；   
			{
				if (GetFocus() == hwnd5)                  //如果按钮5有焦点，那么去焦点；   
					GetDlgItem(IDC_STATIC)->SetFocus();      //这里的IDC_STATIC为你想跳转到的控件ID号   
			}




			if (hwnd6 == hwnd)         //如果鼠标在按钮6上   
			{
				if (GetFocus() != hwnd6)        //如果按钮6无焦点，那么设置焦点   
					hwnd6->SetFocus();
			}
			else          //如果鼠标不在按钮上；   
			{
				if (GetFocus() == hwnd6)                  //如果按钮6有焦点，那么去焦点；   
					GetDlgItem(IDC_STATIC)->SetFocus();      //这里的IDC_STATIC为你想跳转到的控件ID号   
			}




			if (hwnd7 == hwnd)         //如果鼠标在按钮7上   
			{
				if (GetFocus() != hwnd7)        //如果按钮7无焦点，那么设置焦点   
					hwnd7->SetFocus();
			}
			else          //如果鼠标不在按钮7上；   
			{
				if (GetFocus() == hwnd7)                  //如果按钮7有焦点，那么去焦点；   
					GetDlgItem(IDC_STATIC)->SetFocus();      //这里的IDC_STATIC为你想跳转到的控件ID号   
			}
		
	}
	CDialog::OnTimer(nIDEvent);
}




