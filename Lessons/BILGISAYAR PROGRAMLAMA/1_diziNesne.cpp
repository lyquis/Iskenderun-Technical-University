//nesne dizisi tanımlama
#include <iostream>
using namespace std;
class dizi {
    int x;
    public:
        void al (int n){
            x=n;
        }
        int oku (){
            return x;
        }
};
int main (){
    int i;
    dizi d [5];
    //nesne dizisine değerleri yerleştiriyor
    for( i = 0; i <= 4; i++)
    {
        d[i].al(i);
    }
    //nesne dizisi içeriği görüntüleme
    for( i = 0; i <= 4; i++){
        cout << d[i].oku() << "\n" << endl;
    }
    return 0;
}