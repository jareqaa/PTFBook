#include "UPanel.h"

#include <Windows.h>

using namespace PTFBook;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew UPanel);
    return 0;
}