#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] // Атрибут для запуска main в отдельном потоке данных

void main(array<String^>^ args) // автоматическая отчистка памяти
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	MyFIrstWinForm::Form1 form;
	Application::Run(% form);
}