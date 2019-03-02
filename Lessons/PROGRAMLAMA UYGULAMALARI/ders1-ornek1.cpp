#include <iostream>
// <cstring>: String türünde verileri işleme için kullanılır.
#include <cstring>

using namespace std;

int main() {

    // Değişkenlerimizi tanımladık.
    int iDiziUzunlugu = 100;
    char cKarakterDizisi[iDiziUzunlugu];

    /* Kullanıcıdan bir kelime girmesini istedik ve
     * bu kelimeyi dizimizin içerisinde tuttuk. */
    cout<<"Give me a word please: ";
    cin >> cKarakterDizisi;

    /* For döngüsü yardımıyla dizimizin bütün indislerini
     * tersten tek tek ekrana yazdırdık. Böylece bütün kelimemizi
     * ters bir şekilde ekrana yazdırmış olduk.*/

    // strlen(): Başlangıç adresini aldığı yazının uzunluğunu döndürür.
    for (int i = strlen(cKarakterDizisi) - 1 ; i >= 0 ; i--) {
        cout << cKarakterDizisi[i];
    }

    return 0;
};
