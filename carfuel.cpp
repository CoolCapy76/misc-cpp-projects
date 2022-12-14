#include <iostream>
using namespace std;

int main(){
float fueleating = 5.3;
int distancemiles;
float fuel;
cout << "Enter fuel In Litters" <<endl;
cin >> fuel;
distancemiles = fuel / fueleating;
cout << "You can travel " << distancemiles << "miles" << endl;

return 0;
}

