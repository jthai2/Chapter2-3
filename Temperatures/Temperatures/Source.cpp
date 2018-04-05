//Temperatures
//04/4/18
//Jimmy Thai

#include <iostream>
#include <string>

int main()
{
	double temperatureMorning;
	double temperatureNoon;
	double temperatureNight;

	double celsiusMorning = 10;
	double celsiusNoon = 20;
	double celsiusNight = 30;

	temperatureMorning = celsiusMorning * (9 / 5) + 32;
	temperatureNoon = celsiusNoon * (9 / 5) + 32;
	temperatureNight = celsiusNight * (9 / 5) + 32;

	std::cout << "The temperature at 8:00 a.m. is " << celsiusMorning << " celsius and " << temperatureMorning << " fahrenheit." << std::endl;

	std::cout << "The temperature at 5:00 p.m. is " << celsiusNoon << " celsius and " << temperatureNoon << " fahrenheit." << std::endl;

	std::cout << "The temperature at 12:00 p.m.is " << celsiusNight << " celsius and " << temperatureNight << " fahrenheit." << std::endl;

	system("pause");
	return 0;

}