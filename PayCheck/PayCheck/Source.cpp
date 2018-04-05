//PayCheck
//04/5/2018
//Jimmy Thai 

#include <iostream>
#include <string>

int main()
{
	double hoursWorked;
	double hourlyPay;
	double netPaid;

	std::cout << "Please enter your hourly pay >>> " << std::endl;
	std::cin >> hourlyPay;

	std::cout << "Please enter your hours worked >>> " << std::endl;
	std::cin >> hoursWorked;

	netPaid = hoursWorked * hourlyPay;

	std::cout << "Your total pay is $" << netPaid << "." << std::endl;


	system("pause");
	return 0;
}