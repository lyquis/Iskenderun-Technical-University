/* Matematik isminde bir class oluşturup  a,b,c degerlerine gore a*x^2 + b*x + c denkleminin 
pozitif köklerini pozitifKokAl fonksiyonu ile,negatif köklerini negatifKokAl fonksiyonu ile
 hesaplayıp,goster fonksiyonu ile ekrana yazdıran program yazınız */

#include <iostream> 
#include <cmath>
using namespace std;

class Matematik {
    private:
        double x1,x2;
    public:
        void pozitifKokAl (int a, int b, int c){
            x1 = (-b + (sqrt( pow(b,2) -4*a*c) )) / (2*a);
        }
        void negatifKokAl (int a, int b, int c){
            x2 = (-b - (sqrt( pow(b,2) -4*a*c) )) / (2*a);
        }
        void goster () {
            cout << "x1: " << x1 << endl << "x2: " << x2 << endl;
        }
};


int main () {
    Matematik mat;
    mat.pozitifKokAl (2,6,-20);
    mat.negatifKokAl (2,6,-20);
    mat.goster ();
    return 0;
}