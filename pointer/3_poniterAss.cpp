// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     int *p;
//     a=5;
//     p=&a;
//     cout<<*p<<endl;
//     cout<<&a;
// }

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


// #include <iostream>
// using namespace std;
// void adis(int &a){
//     a=50;
//     cout<<a;
// }
// int main()
// {
//     int a=32;
//     adis(a);
//     cout<<a;
    
    
// }
