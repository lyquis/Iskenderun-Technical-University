#include <iostream>
using namespace std;

class testSinif {
    int sayi;
    public:
    
    testSinif (int n) {
        sayi=n;
    }
    
    int deger () {
        return sayi;
    }
}

//Kare alma işlemi.
int kare (testSinif d) {
    return d.deger()*d.deger();
}

//Main fonksiyonu.
int main () {
    //Karesi alınacak değerler.
    testSinif a(9), b(11);
    cout << kare (a) << "\n";
    cout << kare (b) << "\n";
    return 0;
}
