#include <iostream>
using namespace std;

class testSinif {
    private:
    int a,b;
    public:
    //Arkadaş fonksiyon tanımlanıyor.
    friend int fark (testSinif ts);
    testSinif();
}

//Kurucu fonksiyon.
testSinif::testSinif() {
    a=10;
    b=20;
}

//Arkadaş fonksiyon tanımlanıyor.
int fark(testSinif ts) {
    if (ts.a == ts.b) return 0;
    return 1;
}

//Main fonksiyonu.
main () {
    testSinif ts;
    if (fark(ts))
    cout << "iki deger esit degil";
    else cout << "iki deger esit" << "\n";
}
