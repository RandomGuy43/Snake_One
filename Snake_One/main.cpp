// linkowanie klasy do formy
//#include "Obraz2.h"

#include "First_One.h" //linkujesz naglowek do formy

using namespace SnakeOne; //tu wpisujesz nazwe projektu

[STAThreadAttribute]
int main(void)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew First_One()); //podajesz nazwy formy

	return 0;
}