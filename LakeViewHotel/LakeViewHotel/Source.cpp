//LakeViewHotel
//04/6/2018
//Jimmy Thai 

#include <iostream>
#include <string>

int main()
{
	int nightsPerStay;
	int nightsCost;
	int roomService;
	int useTelephone;
	int perNightRate = 100;
	int roomServiceCharge = 35;
	int telephoneCharge = .25;

	std::cout << "How many nights would you like to stay?" << std::endl;
	std::cin >> nightsPerStay;

	std::cout << "You want room service?" << std::endl;
	std::cin >> roomService;

	std::cout << "You want to use a telephone?" << std::endl;
	std::cin >> useTelephone;

	nightsCost = nightsPerStay * perNightRate;

	std::cout << "Your total is $" << nightsCost << std::endl;

	system("pause");
	return 0;

}