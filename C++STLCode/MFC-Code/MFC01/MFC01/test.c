//#include<windows.h>
//
//LRESULT CALLBACK WindowProc(
//	HWND hwnd, //��Ϣ�����Ĵ��ھ��
//	UINT uMsg, //������Ϣ����  WM_XXXX ��Ϣ��
//	WPARAM wParam, //���̸�����Ϣ
//	LPARAM lParam  //��긽����Ϣ
//	)
//{
//	switch (uMsg)
//	{
//	case WM_CLOSE:
//		DestroyWindow(hwnd);
//		break;
//	case WM_DESTROY:
//		PostQuitMessage(0);
//		break;
//	case WM_LBUTTONDOWN:
//	{
//		int xPos = LOWORD(lParam);
//		int yPost = HIWORD(lParam);
//
//		char buf[1024];
//		wsprintf(buf, TEXT("x=%d,y=%d"), xPos, yPost);
//
//		MessageBox(hwnd, buf, TEXT("����������"), MB_OK);
//		break;
//	}
//		
//	case WM_KEYDOWN:
//		MessageBox(hwnd, TEXT("���̰���"), TEXT("���̰���"),MB_OK);
//		break;
//	case WM_PAINT:
//	{
//		PAINTSTRUCT ps;
//		HDC hdc = BeginPaint(hwnd, &ps);
//
//		TextOut(hdc, 200, 200, TEXT("HELLO"), strlen("HELLO"));
//
//		EndPaint(hwnd, &ps);
//	}
//		break;
//
//	}
//	return DefWindowProc(hwnd, uMsg, wParam, lParam);
//}
//
//
//int WINAPI WinMain(
//	HINSTANCE hInstance,
//	HINSTANCE hPrevInstance,
//	LPSTR lpCmdLine,//char *argv[]
//	int nShowCmd)
//{
//	WNDCLASS wc;
//	wc.cbClsExtra = 0;
//	wc.cbWndExtra = 0;
//	wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
//	wc.hCursor = LoadCursor(NULL, IDC_HAND);
//	wc.hIcon = LoadIcon(NULL, IDI_QUESTION);
//	wc.hInstance = hInstance;
//	wc.lpfnWndProc = WindowProc;
//	wc.lpszClassName = TEXT("WIN");
//	wc.lpszMenuName = NULL;
//	wc.style = 0;
//
//	RegisterClass(&wc);
//
//	HWND hwnd = CreateWindow(wc.lpszClassName, TEXT("WINDOWS"), WS_OVERLAPPEDWINDOW,
//		CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, NULL, NULL, hInstance, NULL);
//
//	ShowWindow(hwnd, SW_SHOWNORMAL);
//	UpdateWindow(hwnd);
//
//	MSG msg;
//	while (GetMessage(&msg, NULL, 0, 0))
//	{
//
//		TranslateMessage(&msg);
//
//		DispatchMessage(&msg);
//	}
//	return 0;
//}