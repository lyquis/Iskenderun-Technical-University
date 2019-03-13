//call by reference
#include <iostream>
using namespace std;

class testSinif {
    private:
        int sayi;
    public:
        testSinif (int n) {  //sayıyı n'e eşitliyor.
            sayi = n;
        }
        int deger(){
            return sayi;   //n değerini döndürüyor.
        }
};
//kare alma işlemi
int kare (testSinif &d){   
    return d.deger () * d.deger();
}
int main (){
testSinif a (9),b (11);   
cout << kare (a) << "\n";
cout << kare (b) << "\n";
return 0;
}