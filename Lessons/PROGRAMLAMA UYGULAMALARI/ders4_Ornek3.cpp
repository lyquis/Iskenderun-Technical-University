//reverse iterator. stringi tersten yazar

#include <iostream>
#include <string>
using namespace std;

int main () {
    string duzu ("merhaba dunya");
    string::reverse_iterator tersi;
    string str1;
 
for (tersi = duzu.rbegin (); tersi < duzu.rend(); tersi++){
    str1=*tersi;
    cout << str1;
}
cout << endl;

return 0;
}