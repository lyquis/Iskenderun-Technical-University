// String swap 

#include <iostream>
#include <string>
using namespace std;

int main () {
    string adi1 ("zeynep") ;
    string adi2 ("ahmet") ;
    cout << adi1 << "  " << adi2 << endl; //değiştirilmeden önceki halini yazdırır.
    adi1.swap (adi2);                     //swap işlemi yapar.
    cout << adi1 << "  " << adi2 << endl; //Değiştirildikten sonraki halini yazar.

    return 0;
}