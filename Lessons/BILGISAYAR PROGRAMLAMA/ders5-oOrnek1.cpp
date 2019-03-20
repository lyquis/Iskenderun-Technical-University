/*Matematik sınıfında girilen iki kenar uzunluğu için; kenar1,kenar2 ve açı parametreleri ile 3. kenar uzunluğunu
hesapla fonksiyonu ile bulan ve maine gönderen program (maine return ediyor)
*/

#include <iostream>
#include <cmath>
using namespace std;

class Matematik {
    public:
        double hesapla (double kenar1,double kenar2,int aci);
};

    //cosinüs teoremi (a^2 = b^2 + c^2 - 2(b*c*cos a))
    //dereceyi radyana çevirme (radyan = derece*3.14 / 180)
double Matematik::hesapla (double kenar1, double kenar2, int aci) {
    return sqrt ((pow (kenar1,2)+pow (kenar2,2)-2*(kenar1*kenar2*cos(aci*3.14/180)))); 
}

int main () {
    Matematik mat;
    cout << mat.hesapla (3,4,90) << endl;   // 3-4-5 üçgeni denemesi
    cout << mat.hesapla (5,12,90) << endl;  //5-12-13 üçgeni denemesi   
    return 0;
}
