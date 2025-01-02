// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int *p=&a;
//     cout<<p<<endl;
//     p++;//increace of 1 int space(4 byte)
//     cout<<p<<endl;
// }


#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *p=&a;
    int *pp=p+3;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<pp<<endl;
    cout<<pp-p;
}
