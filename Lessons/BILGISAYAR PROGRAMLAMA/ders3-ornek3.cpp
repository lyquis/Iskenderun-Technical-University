#include <iostream>
using namespace std;

class testSinif {
    int i;
    public:
    
    void ata(int n) {
        i=n;
    }
    
    int deger () {
        return i;
    }
}

//Main fonksiyonu.
int main() {
    testSinif n1, n2 ;
    n1.ata(1234);
    
    //Bir nesne diğerine kopyalanıyor.
    n2=n1;
    cout << "ikinci nesne degeri =" << n2.deger()<<"\n";
    cout << "birinci nesne degeri =" << n1.deger()<<"\n";
    return 0 ;
}
