//this pointeri cout denemeleri
#include <iostream>
using namespace std;
class test {
    public:
    test (int = 0);
    void ekrana_yaz() const;
    int y;
    private:
    int x;
    friend void afonk( test t);
};
test::test (int a){
    x=a;                        // x'e a değerini atıyor.
    y=900;
}
void test::ekrana_yaz() const {
    cout << this->x << endl;   //aynı ifade
    cout << (*this).x << endl; //aynı ifade
    cout << x << endl;
    cout << &(*this).x << endl; //pointerin kendi adresini yazdırır
    cout << this << endl;       
}
void afonk (test t){
    t.x=9;
    cout << endl << t.x << endl;
}
int main ()
{
    test nesne (12);
    nesne.ekrana_yaz();
    cout << endl << nesne.y << endl;
    afonk (nesne);
    return 0;
}