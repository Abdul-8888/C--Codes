#include <iostream>
using namespace std;
main()
{
	int value;
	cout << "Enter the Total price : ";
	cin >> value;

	if (value <= 5000)
{	float discount , payable;
	discount = value*5/100;
	payable = value-discount;	

	cout << "The discount is : "<<discount<<endl;
	cout << "The payable price is : "<<payable;
	}
	
        else
	{	float discount , payable;
	discount = value*10/100;
	payable = value-discount;	

	cout << "The discount is : "<<discount<<endl;
	cout << "The payable price is : "<<payable;
	}
	






}