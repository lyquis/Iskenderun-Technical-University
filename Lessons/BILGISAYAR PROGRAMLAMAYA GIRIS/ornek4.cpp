//Fibonacci serisini girilen sayi adedi kadar yazan program.

#include <iostream>
using namespace std;
int main() {
int f1 = 0,f2 = 1,sayac = 0,fYeni = 0;
    
cout << "kac tane yazilsin?";
cin >> sayac;
cout << f1 << " " << f2 << " ";  //ilk iki terimi yazdıran kod
//sonraki terimleri yazdıran kod
for (; sayac > 2;sayac--) {
     fYeni = f1+f2;
     cout << fYeni << " ";
     f1 = f2; 
     f2 = fYeni;
    }
return 0;
}
