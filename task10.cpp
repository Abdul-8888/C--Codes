#include <iostream>
using namespace std;
main()
{
	string myPassword, userEnter;
	myPassword = "maas@1234";
	cout << "Enter the Password : ";
	cin >> userEnter;
	if (myPassword == userEnter)
	{
		cout << "Welcome to My computer";

	}
	
        else
	{
		cout << "try again, it is not so simple";

	}






}