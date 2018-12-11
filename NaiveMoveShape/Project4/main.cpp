#include <windows.h>

int main() {
	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);
	HPEN pen = CreatePen(PS_SOLID, 5, RGB(255, 0, 0));
	unsigned int offset , i=0;

	SelectObject(device_context, pen);
	
	// --- put background
	RECT rect;
	GetClientRect(console_handle, &rect); // -- this is more than we need
	HBRUSH  hbr = CreateSolidBrush(RGB(0,255, 0));

	while(true)
	{
		offset = i % 400;
		FillRect(device_context, &rect, hbr);
		Ellipse(device_context, offset, offset, 100+ offset, 100+ offset);
		Sleep(1);
		i++;
	}
	
	ReleaseDC(console_handle, device_context);
	return 0;
}
