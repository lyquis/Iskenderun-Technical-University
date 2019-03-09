//class tanımlama örneği
#include <iostream>
using namespace std;

class daire
{
    private:
        double yaricap;
        double pi =3.1416;
    public:
        daire (double r)
        {
        yaricap = r;
        }
        void setYaricap (double r)
        {
            yaricap = r;
        }
        double getYaricap()
        {
            return yaricap;
        }
        double getAlan()
        {
            return pi*yaricap*yaricap;
        }
        double getCevre ();
};
double daire::getCevre()
{
    return 2*pi*yaricap;
}
int main ()
{
    daire d (8.74); 
    //d adında bir nesne tanımladık
    cout << d.getAlan () << " " << d.getCevre() << endl; 
    //d. ile daire klasındaki fonksiyonlara erişebiliyoruz
}