#include <iostream>
// <cstring>: String türünde verileri işleme için kullanılır.
#include <cstring>
// <cstdlib>: Sayıları metne/metni sayılara çevirme, hafızada yer ayırma, rastgele sayılar üretme gibi işler için kullanılır.
#include <cstdlib>
// <ctime>: Zaman ve tarih işlemleri için kullanılır.
#include <ctime>

using namespace std;

int main() {
    // srand(time(NULL)): Rastgele sayı üretmek için kullanlır.
    srand(time(NULL));
    
    // Değişkenlerimizi tanımladık.
    int iSayi = 0;
    int iRandomIndis[3];
    int iDiziUzunlugu = 100;
    char cKarakterDizisi[iDiziUzunlugu];
    
    // Kullanıcıdan bir kelime girmesini istedik ve bu kelimeyi dizimizde tuttuk.
    cout << "Give me a word please: ";
    cin >> cKarakterDizisi;
    
    /* For döngüsü yardımı ile rastgele sayı üretip bu sayıyı baz alarak,
     * girilen kelimeden rastgele 3 harf seçip o 3 harfin indisini başka diziye
     * ayırdık. Ana dizimizde seçilen harfi alfabetik sırada kendisinden
     * 2 sonra gelen harf ile değiştirdik. */
    
    for (int i = 0; i < 3; i++) {
        iSayi = rand()%strlen(cKarakterDizisi);
        iRandomIndis[i] = iSayi;
        cKarakterDizisi[iSayi] = cKarakterDizisi[iSayi] + 2;
    }
    
    // Modifiye edilmiş ana diziyi ekrana yazdırdık.
    cout << "Encrypted Array: " << cKarakterDizisi << endl;
    
    // Harflerin kaydettiğimiz indislerine bakarak harfleri eski haline geri çevirdik.
    for (int i = 0; i < 3; i++) {
        cKarakterDizisi[iRandomIndis[i]] = cKarakterDizisi[iRandomIndis[i]] - 2;
    }
    
    // Modifiye edilmemiş asıl diziyi ekrana yazdırdık.
    cout << "Decrypted Array: " << cKarakterDizisi;
    return 0;
}
