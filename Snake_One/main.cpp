#include "MyForm.h" //linkujesz naglowek do formy

using namespace SnakeOne; //tu wpisujesz nazwe projektu

[STAThreadAttribute]
int main()
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm()); //podajesz nazwy formy
	return 0;
}