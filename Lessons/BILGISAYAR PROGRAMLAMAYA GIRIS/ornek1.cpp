//Alışveriş listesinden yapılan seçimlerin toplam fiyatını gösteren program.

#include <iostream>
using namespace std;

int main() {
    int toplam=0,secimMenu,secimUrun;
    
    basla:
    system("cls"); //Ekrandaki yazıları sıfırlıyor
    cout << "Toplam tutar=" << toplam << "TL" << "\n[1]Bilgisayarlar\t[2]Telefonlar\t[3]Oyun Konsollari\t[4]bitir\n\nSeciminiz?  " << endl;
    cin >> secimMenu;
    system ("cls");
    switch (secimMenu) {
        case 1:  cout << "[1]Hp=4.000 TL\n[2]Toshiba=4.500 TL\n[3]MSI=7.000 TL\n[0]Ust menuye git\n\nSeciminiz?  " << endl;
            break;
        case 2:  cout << "[4]Huawei=2.000 TL\n[5]Samsung=5.500 TL\n[6]Iphone=7.000 TL\n[0]Ust menuye git\n\nSeciminiz?  " << endl;
            break;
        case 3:  cout << "[7]Playstation=2.500 TL\n[8]Xbox=3.000 TL\n[0]Ust menuye git\n\nSeciminiz?  " << endl;
            break;
        case 4:
            return 0;
        default: cout << "hatali giris yaptininiz";
            return 0;
    }
    cin >> secimUrun;
    switch (secimUrun) {
        case 0:
            goto basla;
            break;
        case 1:
            toplam=toplam+4000;
            break;
        case 2:
            toplam=toplam+4500;
            break;
        case 3:
            toplam=toplam+7000;
            break;
        case 4:
            toplam=toplam+2000;
            break;
        case 5:
            toplam=toplam+5500;
            break;
        case 6:
            toplam=toplam+7000;
            break;
        case 7:
            toplam=toplam+2500;
            break;
        case 8:
            toplam=toplam+3000;
            break;
        default:
            cout << "Hatali giris yaptininiz";
            return 0;
    }
    goto basla;
}
