#include <iostream>
using namespace std;
main()
{
	float salary, laptopPrice,advance,Tadvance,month;
	cout << "Enter the Total Salary : ";
	cin >> salary;
	
	advance = salary /2;
	Tadvance = advance*6;

	laptopPrice = 50000;
	laptopPrice = laptopPrice - Tadvance;

	month = laptopPrice/advance;	

	
	if (Tadvance >= 50000)
	{ cout << " You can buy A Laptop with your 6 month Advance Salary";
	}
	else 
	{
		cout << "you have to work "<<month<<" more months.";	

	}



}