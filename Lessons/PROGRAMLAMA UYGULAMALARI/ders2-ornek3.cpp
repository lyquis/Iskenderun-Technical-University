#include <iostream>
// <stdlib.h>: Sayıları metne/metni sayılara çevirme, hafızada yer ayırma, rastgele sayılar üretme gibi işler için kullanılır.
#include <cstdlib>

using namespace std;

int main() {
    // Değişkenlerimizi tanımladık.
    int iDiziUzunluk;
    char *myPointer;
    
    // Kaç tane harf gireceğini kullanıcıya sorduk ve bir değişkene atadık.
    cout << "Enter number of characters to store: ";
    cin >> iDiziUzunluk;
    
    // malloc(): Boyutu belli olmayan diziler için dinamik olarak yer açmaya yarar.
    myPointer = (char*) malloc (iDiziUzunluk* sizeof(char));
    
    // Dizimize harfleri tek tek kullanıcıdan alarak atadık.
    for (int i = 0; i < iDiziUzunluk; i++) {
        cout << "Enter " << (i+1) << ". character: ";
        cin >> (myPointer+i);
    }
    
    cout << "Printing elements of array: ";
    
    // Dizimizi yazdırdık.
    for (int j = 0; j < iDiziUzunluk; ++j) {
        cout << myPointer[j];
    }
    return 0;
}
