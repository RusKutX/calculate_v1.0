#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] // ������� ��� ������� main � ��������� ������ ������

void main(array<String^>^ args) // �������������� �������� ������
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	MyFIrstWinForm::Form1 form;
	Application::Run(% form);
}