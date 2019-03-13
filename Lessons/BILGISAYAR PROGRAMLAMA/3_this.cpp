// this kullanımı.fonksiyonu çağıran nesneyi gösterir  

#include <iostream>
using namespace std;

class testSinif {
    int x,y;   //this buradaki x ve y'ye işaret ediyor.
    public:
    testSinif(int x,int y){
        this ->x =x;
        this ->y =y;
    }
    int goruntule (){
        return this -> x + this -> y;
    }
};

main ()
{
    testSinif ob (350,150);
    cout << ob.goruntule ();
    return 0;
}