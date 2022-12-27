#include "pch.h"
#include "MyForm.h"
#include <string.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array < String^ > ^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CalculatorOnWindowsForm::MyForm form;
	Application::Run(% form);
}
