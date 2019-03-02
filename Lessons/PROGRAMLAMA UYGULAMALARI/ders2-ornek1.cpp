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
    int iVariable = 20;
    int *iPointer;
    
    /* iPointer'a iVariable'ın adresini tanımladık.
     * Böylece iPointer'ı çağırdığımızda aslında
     * direkt olarak iVariable'a ulaşmış olacağız.*/
    iPointer = &iVariable;
    
    // Tek tek değerleri ekrana yazdırdık.
    cout << "Value of iVariable: " << iVariable << endl;
    cout << "Value of iPointer: " << iPointer << endl;
    cout << "Value of *iPointer " << *iPointer << endl;
}
