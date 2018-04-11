//Payroll
//04/10/2018
//Jimmy Thai

#include <iostream>

int main()
{
	double weeklyGrossPay;
	double afterTax;
	
	std::cout << "Enter employees weekly gross pay>>>" << std::endl;
	std::cin >> weeklyGrossPay;
	
	afterTax = weeklyGrossPay - ( (weeklyGrossPay / 100) * 32 );
	
	std::cout << "Your employee will now make $" << afterTax << ", after tax." << std::endl;

	system("pause");
	return 0;
}
