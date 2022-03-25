#include <iostream>
using namespace std;
main(){
float a;
float b;
string c;
cout << "Enter student Name..";
cin >> c;
cout << " Enter 1st Test Marks = ";
cin >> a;
cout << " Enter 2nd Test Marks = ";

cin >> b;
 a = b+a ;
cout << " Enter 3rd Test Marks = ";
float e;
cin >> e;
a = a+e;
cout << " Enter 4th Test Marks = ";
float f;
cin >> f;
a = a+f;
cout << " Enter 5th Test Marks = ";
float g;
cin >> g;
a = a+g;
float h;
h = a/5;
cout <<"        "<< c<<endl;
cout << " Total Marks are = "<< a<<endl;
cout << " Average of Students Marks = " << h;
}
