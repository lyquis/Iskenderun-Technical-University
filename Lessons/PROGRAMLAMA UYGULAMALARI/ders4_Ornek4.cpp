//string dizisine ikinci bir atama yapıldığında oluşan değişimleri gösterir

#include <iostream>
using namespace std;

int main (){
    string degisken ( "bu ilk atamadır ve karakter sayisi 42 dir");
    degisken ="Bu da sonraki değer";
    cout << "size :" << degisken.size() << endl;
    cout << "length :" << degisken.length () << endl;
    cout << "capacity :" << degisken.capacity () << endl;
    cout << "max size :" << degisken.max_size () << endl;

return 0;
}