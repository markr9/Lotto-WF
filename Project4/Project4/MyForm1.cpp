#include "MyForm1.h"
#include <Windows.h>

using namespace Project4;
int __stdcall WinMain(HINSTANCE hInst, HINSTANCE hPInst,
	LPSTR lpCmdLine, int nCmdShow)
{
	MyForm1 frm;
	frm.ShowDialog();
	return 0;
}
