#include"MFC.h"

MyApp app;

BOOL MyApp::InitInstance()
{
	MyFrame *frame = new MyFrame;

	frame->ShowWindow(SW_SHOWNORMAL);
	frame->UpdateWindow();
	m_pMainWnd = frame;
	return TRUE;
}
//�ֽ��
BEGIN_MESSAGE_MAP(MyFrame, CFrameWnd)

	ON_WM_LBUTTONDOWN()
	ON_WM_CHAR() 
	ON_WM_PAINT() 
	
END_MESSAGE_MAP()

MyFrame::MyFrame()
{
	Create(NULL, TEXT("MFC"));
}

void MyFrame::OnLButtonDown(UINT, CPoint point)
{
	TCHAR buf[1024];
	wsprintf(buf, TEXT("x=%d,y=%d"), point.x, point.y);
	MessageBox(buf);
}

void MyFrame::OnChar(UINT key, UINT, UINT)
{
	CString str;
	str.Format(TEXT("������%c ��"), key);
	MessageBox(str);
}

void MyFrame::OnPaint()
{
	CPaintDC dc(this);
	dc.TextOutW(100, 100, TEXT("Ϊ����"));

	dc.Ellipse(10, 10, 120, 120);

	int num = 0;
	char *p = "aaa";
	num = strlen(p);

	wchar_t *p2 = L"bbb";
	num = wcslen(p2);

	char *p3 = "ccc";
	CString str = CString(p3);

	CStringA tmp;
	tmp = str;
	char *pp = tmp.GetBuffer();

}
