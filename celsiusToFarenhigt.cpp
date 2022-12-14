#include <iostream>
using namespace std;

int main(){
float farenhight;
cout << "Enter temp in Farenhight"<< endl;
cin >> farenhight;
float celsius = (farenhight-32)/1.8;
cout << "Temp in celsius is " << celsius << endl;
return 0;
}

