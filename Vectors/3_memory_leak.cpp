#include<bits/stdc++.h>
using namespace std;
int* funcP(){
    int *ptr=new int;
    *ptr = 1209;
    cout<<*ptr<<endl;
    return ptr;
}
int main(){
    int *u=funcP();
    cout<<*u<<endl;
    return 0;

}
// This is an example of memory leak
//There's a catch that after program execute completly the heap memory will delete automatically