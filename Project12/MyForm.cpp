#include "MyForm.h"
#include <Windows.h>
using namespace Project12; // Название проекта и название namespace (неймспейса) должны быть одинаковыми; 
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
}
