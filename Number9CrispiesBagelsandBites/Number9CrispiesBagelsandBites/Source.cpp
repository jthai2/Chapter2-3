//Crispies Bagels and Bites
//04/9/18
//Jimmy Thai

#include <iostream>
#include <string>

int main()
{
	double bagels;
	double donuts;
	double cupsOfCoffee;

	std::cout << "How many bagels would you like?" << std::endl;
	std::cin >> bagels;
	std::cout << "How many donuts would you like?" << std::endl;
	std::cin >> donuts;
	std::cout << "How many cups of coffee would you like?" << std::endl;
	std::cin >> cupsOfCoffee;

	double priceBagels = bagels * .99;
	double priceDonuts = donuts * .75;
	double priceCoffee = cupsOfCoffee * 1.20;

	double totalAmount = priceBagels + priceDonuts + priceCoffee;

	std::cout << "Your total price is $" << totalAmount << std::endl;

	system("pause");
	return 0;
}