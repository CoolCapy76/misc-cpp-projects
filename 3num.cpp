#include <iostream>
using namespace std;

int main(){
int razmerkvadrad;
int shirplochki;
int dulshinaplochki;
int razmerplacki = shirplochki*dulshinaplochki;
int shirpeika;
int dulshinapeika;
int razmerpeika = shirpeika * dulshinapeika;
float plos = razmerkvadrad * razmerkvadrad;
cin >> razmerkvadrad;
cin >> shirplochki;
cin >> dulshinaplochki;
cin >> shirpeika;
cin >> dulshinapeika;

int brplocki = (plos-razmerpeika)/razmerplacki;
float vreme = brplocki*0.2;
cout<< brplocki<< vreme;
return 0;
}
