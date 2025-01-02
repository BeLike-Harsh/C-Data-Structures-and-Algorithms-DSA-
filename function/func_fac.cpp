#include<iostream>
using namespace std;
int val(int n){
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
       fact*=i;
    }
    cout<<"The Factorial of " << n << " number is: "<< fact;
}
int main(){
    val(4);
    return 0;
}