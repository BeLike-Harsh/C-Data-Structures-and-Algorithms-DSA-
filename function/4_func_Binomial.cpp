#include<iostream>
using namespace std;
int factorial(int x){
    int result=1;
    for (int i = 1; i <= x; i++)
    {
       result*=i;
    }
    return result;
}
int binomialC(int n,int r){
    int x=factorial(n);
    int y=factorial(r);
    int z=(n-r);
    return x/(y*z);
}
int main(){
    cout<<"The Binomial cofficient is "<<binomialC(6,4);
}