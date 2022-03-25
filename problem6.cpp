#include <iostream>
using namespace std;
main(){
   int v1;
   int v2;
   int time;
cout << "Enter Initial velocity..";
cin >> v1;
cout << " Enter Final velocity..";
cin >> v2;
v1 = v2-v1;
cout << "Enter the value of Time..";
cin >> time;
v1 = v1/time;
cout << "Acceleration is.." << v1;
}
