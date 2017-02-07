#include <iostream>
#include <cmath>
using namespace std;
int basari;
double sayi1;
double sayi2;
int islem;
int main() {
cout << "Dort Islem Makinesi" << endl;
cout << "Birinci sayiyi giriniz: ";
cin >> sayi1;
cout << "Ikinci sayiyi giriniz: ";
cin >> sayi2;
cout << "Islem seciniz: (1=+, 2=-, 3=*, 4=/) ";
cin >> islem;
switch(islem){
case 1:
cout << "Toplama Sonucu= " << sayi1+sayi2
<< endl; break;
case 2:
cout << "Cikarma Sonucu= " << sayi1-sayi2
<< endl; break;
case 3:
cout << "Carpma Sonucu= " << sayi1*sayi2
<< endl; break;
case 4:
cout << "Bolme Sonucu= " << sayi1/sayi2
<< endl; break;
default:
cout << "Hatali sayi girdiniz." << endl; }
return 0; } 
