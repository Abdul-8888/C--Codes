#include <iostream>
using namespace std;
main(){
float a;
float b;
float c;
float d;
float e;
float f;
float g;
string z;
cout << "Enter MOVIE Name..";
cin >> z;
cout << " Enter Adult Ticket price.. ";
cin >> a;
cout << " Enter Child Ticket price.. ";
cin >> b;
cout << " Enter Number of Adult Ticket sold.. ";
cin >> c;
cout << " Enter Number of child Ticket sold.. ";
cin >> d;
cout << " Enter Percentage of Donation.. ";
cin >> e;
a = a*c;
b = b*d;
a = a+b;
g = a*e/100;
b = a-g;
c = c+d;
cout << ""<<endl;
cout <<"        "<<z<<endl;
cout << "Total sold Tikets =   "<<c<<endl;
cout << "Total Amount Collected =  "<<a<<endl;
cout << "Total profit Amount =  "<<b;
}
