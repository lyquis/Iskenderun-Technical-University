//Setter-Getter
#include <iostream>
using namespace std;
class dizi {
    int x;
    public:
        dizi(int n) {  //Setter
            x=n;
        }
        int oku() {   //Getter
            return x;
        }
};

int main () {
    dizi d[5]={2,7,0,3,9}; //Başlangıç değeri atanıyor.
    int i;
    
//Görüntüleme
    for( i = 0; i <= 4; i++) {
        cout << d[i].oku() << endl;
    }
    return 0;
}
