#include <iostream>
using namespace std;
int main()
{
    int a=32;
    int*p=&a;

    char ch='A';
    char &cho=ch;
     
    cho+=a;
    *p+=ch;
    cout << a << ","<< ch << endl;
    
}
