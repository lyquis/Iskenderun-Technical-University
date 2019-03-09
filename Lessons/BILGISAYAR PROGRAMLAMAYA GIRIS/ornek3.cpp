//Kullanıcıya sürekli sayı girdiren ve en büyük sayının kaç kere girildiğini hesaplayan program.

#include <iostream>
using namespace std;
int main() {
    int sayi = 1, enbuyuk = 0, girilmeMiktari = 0;
    while (sayi <= 100 && sayi >= 1) {
        cout << "1-100 arasi bir sayi giriniz" << endl;
        cout << "cikmak icin 1 den kucuk ya da 100'den buyuk bir sayi giriniz " << endl;
        cin >> sayi;
        if (sayi > enbuyuk) {
            enbuyuk = sayi;girilmeMiktari = 1; //en büyük sayi güncellenirse girilme sayisini 1'e eşitliyor
        }
        else if (sayi == enbuyuk){
            girilmeMiktari++ ;
        } //sayı tekrar girilince girilme sayısına 1 ekliyor
    }
  cout << girilmeMiktari << endl;
  cout << "enbuyuk sayi=" << enbuyuk << '\t' << girilmeMiktari << " kere girildi";
  return 0;
}
