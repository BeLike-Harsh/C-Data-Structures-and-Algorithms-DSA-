#include<iostream>
using namespace std;
 bool isPrime(int n){
    if (n==1)
    {
       return false;
    }
    for (int i = 2; i*i <=n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;
 }
    void print_P(int n){

        for (int i = 2; i <= n; i++)
        {
           if (isPrime(i))
           {
             cout<< i << " ";
           }
           
        }
        
    }
    
int main(){
    cout<< "The Prime number from 2 to n are: ";
    print_P(50);
    return 0;
}