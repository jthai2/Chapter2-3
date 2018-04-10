//Payroll
//04/10/2018
//Jimmy Thai

#include <iostream>
#include <string>

int main()
{
	double weeklyGrossPay;
	double weeklyNetPay;

	std::cout << "What is your weekly gross pay?" << std::endl;
	std::cin >> weeklyGrossPay;

	double FWT = weeklyGrossPay * .20;
	double FWT2 = weeklyGrossPay - FWT;
	double FICA = FWT2 * .8;
	double FICA2 = FWT2 - FICA;
	double stateIncome = FICA2 * .4;
	double stateIncome2 = stateIncome - 

	system("pause");
	return 0;
}