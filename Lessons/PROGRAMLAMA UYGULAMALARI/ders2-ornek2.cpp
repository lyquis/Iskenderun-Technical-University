#include <iostream>

using namespace std;

// Fonksiyon prototipimizi tanımladık.
void information();

// Fonksiyonumuzu çağırdık.
int main() {
    information();
    return 0;
}

// Fonksiyonumuzu oluşturduk ve içerisinde kodlarımızı yazdık.
void information(){
    
    // Değişkenlerimizi tanımladık.
    int iDizi[3] = {1,2,3};
    int *iPointer;
    
    /* iPointer'a Dizimizin ilk adresini tanımladık.
     * Böylece iPointer'ı çağırdığımızda aslında
     * direkt olarak dizimizin 0.indisinden itibaren ulaşmış olacağız.*/
    iPointer = iDizi;
    
    /* For döngüsü yardımı ile dizimizin indislerini ve
     * indislerinin adreslerini ekrana yazdırdık. */
    for (int i = 0; i < 3; i++) {
        cout << "Value of iPointer: " << iPointer << endl;
        cout << "Value of *iPointer: " << *iPointer << endl;
        iPointer ++;
    }
}
