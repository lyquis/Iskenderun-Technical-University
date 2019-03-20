// String replace

#include <iostream>
#include <string>
using namespace std;

void replaceDemo (string s1 ,string s2 ,string s3 ,string s4) {
    s1.replace (0,7,s2);
    cout << s1 << endl;
    s4.replace (0,3,"hello");
    cout << s4 << endl;
    s4.replace (6,3,"to all",6);
    cout << s4 << endl;
}

int main () {
    string s1 = "Example of replace";
    string s2 = "Demonstration";
    string s3 = "Geeks for geeks";
    string s4 = "Hello world";
    replaceDemo (s1,s2,s3,s4);

return 0;

}
