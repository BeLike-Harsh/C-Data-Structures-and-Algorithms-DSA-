#include<iostream>
using namespace std;
int val(int n){
    if(n%2==0){
        cout<<"n is an even number";
    }
    else{
        cout<<" n is an odd number";
    }
}
int main(){
     val(4);
    return 0;
}