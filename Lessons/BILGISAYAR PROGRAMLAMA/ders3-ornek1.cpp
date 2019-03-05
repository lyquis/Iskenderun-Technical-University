#include <iostream>
using namespace std;

// Sınıf tanımlanıyor.
class testSinif {
    int a;
    public:
        testSinif (int sayi);
        ~testSinif();
    void goruntule ();
}

// Değişken değerlerini görüntüler.
testSinif::testSinif(int sayi) {
    a=sayi;
}

testSinif::~testSinif() {
    
}

void testSinif::goruntule() {
    cout << a << "\n";
}

//Main fonksiyonu.
int main () {
//Kurucuya parametre gönderme, işleme.
    testSinif ts(25);
    ts.goruntule();
    return 0;
}
