/* Matematik isminde bir class oluşturun.kokAl fonksiyonunu kullanarak a,b,c degerlerine gore a*x^2 + b*x + c 
denkleminin koklerini hesaplayıp ekrana yazdıran program */

#include <iostream> 
#include <cmath>
using namespace std;

class Matematik {
    private:
        double x1,x2;
    public:
        void kokAl (int a, int b, int c);
};

// 2. dereceden denklem köklerinin formülü fonksiyon içine yazılıyor.
void Matematik::kokAl (int a, int b, int c){
    x1 = (-b + (sqrt( pow(b,2) -4*a*c) )) / (2*a);
    x2 = (-b - (sqrt( pow(b,2) -4*a*c) )) / (2*a);
    cout << "x1: " << x1 << endl << "x2: " << x2 << endl;
}

int main () {
    Matematik mat;
    mat.kokAl (2,6,-20);
    return 0;
}