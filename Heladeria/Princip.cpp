#include "Princip.h"
#include <string>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

//using namespace  CarritosFormas;
[STAThreadAttribute]

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Heladeria::Princip form;
	Application::Run(% form);
}