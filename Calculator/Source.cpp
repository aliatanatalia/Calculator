#include "MyForm.h"
#include <stdlib.h>
#include <iostream>
#include <cmath>
using namespace System;
using namespace System::Windows::Forms;

void main(cli::array<String^>^ args)
{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		Calculator::MyForm form;
		Application::Run(%form);
}