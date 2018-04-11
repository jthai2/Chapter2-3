//LakeViewHotel
//04/6/2018
//Jimmy Thai 

#include <iostream>

int main()
{
	double nightsPerStay;
	int roomServiceChoice;
	int roomService;
	double phoneMinutes;
	double bill;

	std::cout << "How many nights have you stayed?" << std::endl;
	std::cin >> nightsPerStay;
	std::cout << "Do you want room service? Press 1 for Yes and 2 for No>>>" << std::endl;
	std::cin >> roomServiceChoice;

	if (roomServiceChoice == 1)
	{
		roomService = 1;
	}
	else if (roomServiceChoice == 2)
	{
		roomService = 2;
	}
	else
	{
		std::cout << "What you entered was invalid, automatically setting room service in." << std::endl;
		roomService = 1;
	}

	std::cout << "How much minutes have you spent on the phone?" << std::endl;
	std::cin >> phoneMinutes;

	bill = (nightsPerStay * 100) + (roomService * 35) + (phoneMinutes * 0.25);

	std::cout << "Your bill is $" << bill << std::endl;
	std::cout << endl;
	
	system("Pause");
	return(0);
}
