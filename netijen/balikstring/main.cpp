#include <iostream>
#include <string>
using namespace std;

int main()
{
    int aa;
    string a;
    int c;
    char k;
    getline(cin,a);
    aa=a.length();
    for (int i=0;i<aa;i++){
    c =(int)a[i];

   if(c>=65&&c<=90){
     k = char(c+32);
     cout << k;
   }
   else if (c>=97&&c<=122){
    k = char(c-32);
     cout << k;
   }
   else if (c==32){
    cout << a[i];
   }
    }

    return 0;
}
