//Eggs
//04/5/2018
//Jimmy Thai

#include <iostream>
#include <string>

int main()
{
	int eggsWanted;
	int dozenEggs = 12;

	std::cout << "How many eggs would you like?" << std::endl;
	std::cin >> eggsWanted;

	int dozenEggsTotal = eggsWanted / dozenEggs;
	int singleEggTotal = eggsWanted % dozenEggs;

	int dozenEggsTotalPrice = dozenEggsTotal + dozenEggsTotal;
	double singleEggTotalPrice = singleEggTotal * .25;

	int discountedEgg = dozenEggsTotal * 1.50;

	std::cout << "You have " << dozenEggsTotal << " dozen eggs and " << singleEggTotal << " single eggs." << std::endl;
	std::cout << "Your total price per dozen is $" << dozenEggsTotalPrice << ", your total price per remaining egg is $" << singleEggTotalPrice << std::endl;

	if (dozenEggsTotal > 10)
	{
		std::cout << "Your discounted total is now $" << discountedEgg << " per dozen egg." << std::endl;
	}

	system("pause");
	return 0;
}