#include <iostream>
using namespace std;

int main(){
int salary;
float allowence = 0.35;
float rent = 0.25;
cout << "Enter your salary" << endl;
cin >> salary;
cout << "End salary is " <<  salary - (salary*allowence) - (salary*rent) ;


return 0;
}
