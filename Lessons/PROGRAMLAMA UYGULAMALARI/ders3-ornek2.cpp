//Arkadaş class tanımlama örneği.

#include <iostream>
using namespace std;

class daire {
    private:
        double yaricap;
        double pi =3.1416;
        double getAlan() {
            return pi*yaricap*yaricap;
        }
        double getCevre () {
            return 2*pi*yaricap;
        }
    
    public:
        void setYaricap (double r) {
            yaricap = r;
        }
        double getYaricap() {
            return yaricap;
        }
        friend class Silindir;   
        //Silindir class'ını friend class olarak tanımladık ve artık private kısımdaki verilere erişebiliyor.
    };

class Silindir {
    private:
        daire d;
        double height;
    
    public:
        Silindir (double r, double h ) {
            d.setYaricap(r);
            height = h;
        }
        double getHacim () {
            return d.getAlan() * height;
        }
        double getYuzeyAlan () {
            return 2 * d.getAlan() + d.getCevre() * height;
        }
    };

int main () {
    Silindir s (5.3,12.5);
    cout << s.getHacim() << " " << s.getYuzeyAlan() << endl;
}
