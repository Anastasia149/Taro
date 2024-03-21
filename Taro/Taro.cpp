#include "Taro.h"
#include "FisRasclad.h"
#include "VirtualRasclad.h"
#include "TestForm.h"
#include "Rasclads.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array <String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Taro::Taro form;
	Application::Run(% form);

}