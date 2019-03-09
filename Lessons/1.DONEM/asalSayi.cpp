//kullanıcı tarafından girilen sayıya kadar tüm sayıların asal olup olmadığını ekrana yazdıran program

#include <iostream>
using namespace std;

int main()
{
        int bolunmeSayisi=0;//kontrol sayisi.
    cout << "kactan kucuk asallari yazdiracaksiniz?" << endl;
    int n;
    cin >> n;
       for(; n >= 2;n--)
       {
           bolunmeSayisi = 0;
            for(int i = 2; i <= n/2;i++)
            {
                if (n%i == 0){cout << n << "=asal degil\n";bolunmeSayisi = 1;break;} //bu if e girmezse 0 olarak kaliyor
            }
         if (bolunmeSayisi==0)
         {cout<<n<<"=asaldir\n";}
        }//bolunmeSayisi=0 ise hicbir sayiya bolunmemis demektir.burda ekrana asal yaziyoruz.
    return 0;
}

