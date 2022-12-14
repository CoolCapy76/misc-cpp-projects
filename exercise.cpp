#include <iostream>
using namespace std;

int main(){

int kebabcheta;
int kufteta;
float kuf = 1.25;
float keb = 1.30;
float total;

cout << "vkarai kolko kufteta i kebabcheta sa prodadeni" << endl;
cin >> kufteta;
cin >> kebabcheta;
total = (kufteta * kuf) + (kebabcheta * keb);
cout << "Pechalba - " << total;

return 0;
}
