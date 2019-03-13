//setter,getter
#include <iostream>
using namespace std;
class dizi {
    int x;
    public:
        dizi(int n){  //setter
            x=n;
        }
        int oku(){   //getter
            return x;
        }
};
int main ()
{
    dizi d[5]={2,7,0,3,9}; //başlangıç değeri atanıyor
    int i;
//görüntüleme
for( i = 0; i <= 4; i++){
        cout << d[i].oku() << endl;
    }
    return 0;
}