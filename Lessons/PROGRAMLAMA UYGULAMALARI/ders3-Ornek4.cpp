//Amerikan ve Avrupa birimleri arasında dönüşüm yapan program.
#include <iostream>
using namespace std;

class Converter {
    private:
        double poundks = 0.4535;
    
    public:
        double convertKGtoPound (double kg) {
                return kg / poundks;
            }
        double convertPoundtoKG (double pound) {
                return pound * poundks;
            }
    };

int main () {
    Converter olcu; //Ölçü adında bir nesne tanımladık.
    cout << olcu.convertKGtoPound (10) << endl;
    cout << olcu.convertPoundtoKG (10) << endl;
}
