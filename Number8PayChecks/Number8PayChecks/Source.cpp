//PayCheck
//04/9/2018
//Jimmy Thai

#include <iostream>
#include <string>

int main()
{
	double payCheck;
	double amountSaved;
	double totalAmount;
	double depositedIntoSavings;
	double payCheckPercentage;

	std::cout << "How much is your pay check?" << std::endl;
	std::cin >> payCheck;

	std::cout << "What is the percentage of your pay check?" << std::endl;
	std::cin >> payCheckPercentage;

	std::cout << "What is your bonus check amount?" << std::endl;
	std::cin >> amountSaved;

	double payCheck2 = payCheck * 24;
	int totalDeposit = (payCheck2 * payCheckPercentage) + 100;

	std::cout << "Your amount deposited per year is $" << totalDeposit << std::endl;

	system("pause");
	return 0;
}