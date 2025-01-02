#include<iostream>
using namespace std;
int main(){
    int a=5,b=6;
    int *p=&a,*g=&b;
    g=p;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<g;
    return 0;
}


