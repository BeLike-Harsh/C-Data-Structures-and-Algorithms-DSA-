#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *p=&a;
    int **pp=&p;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<pp<<endl;
    cout<<&p;
}


