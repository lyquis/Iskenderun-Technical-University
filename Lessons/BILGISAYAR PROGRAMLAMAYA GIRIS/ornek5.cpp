//Klavyeden girilen iki sayı aralığının kesişim kümesini yazdıran program.

#include <iostream>
using namespace std;

int main() {
    int a[2],b[2];
    
    //iki elemanlı kümelere sayi aralıklarının başlangıç ve bitiş noktaları atanıyor
    cout << "birinci sayi araliginin baslangicini giriniz=" << endl;
    cin >> a[0];
    cout << "birinci sayi araliginin bitisini giriniz=" << endl;
    cin >> a[1];
    cout << "ikinci sayi araliginin baslangicini giriniz=" << endl;
    cin >> b[0];
    cout << "ikinci sayi araliginin bitisini giriniz=" << endl;
    cin >> b[1];
    cout << "kesisim kumesi=(";

    // i sayacını uygun aralıktan başlatıp bitiş değerine kadar yazdıran kod
    // break komutu son haneden sonra virgül yazdırmamak için.
    if (a[0] >= b[0] && a[1] <= b[1] ) {
        for ( int i = a[0]; i <= a[1] ;i++) {
            cout << i ;
            if ( i == a[1] ) {
                break;
            }
            cout << ",";
        }
    }
    
    if (a[0] <= b[0] && a[1] <= b[1] ) {
        for ( int i = b[0]; i <= a[1] ;i++) {
            cout << i ;
            if ( i == a[1] ) {
                break;
            }
            cout << ",";
        }
    }
    
    if (a[0] >= b[0] && a[1] >= b[1] ) {
        for ( int i = a[0]; i <= b[1] ;i++) {
            cout << i ;
            if ( i == b[1] ) {
                break;
            }
            cout << ",";
        }
    }
    
    if (a[0] <= b[0] && a[1] >= b[1] ) {
        for ( int i = b[0]; i <= b[1] ;i++) {
            cout << i ;
            if ( i == b[1] ) {
                break;
            }
            cout << ",";
        }
    }
    cout << ")";
    return 0;
}
