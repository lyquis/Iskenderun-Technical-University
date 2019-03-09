//kure yuzey alanı ve hacmini hesaplayan program

#include <iostream>
using namespace std;

class kure
{
    private:
        double yaricap;
        double pi =3.1416;
    public:
        kure(double r)
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
        double getYuzeyAlan()
        {
            return 4*pi*yaricap*yaricap;
        }
        double getHacim ();
};
double kure::getHacim()
{
    return (4.0/3)*pi*yaricap*yaricap*yaricap;
}
int main ()
{
    kure d (8.74);
    cout << d.getYuzeyAlan () << " cm^2" << '\n' << d.getHacim() << " cm^3" << endl;
}