#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter your number: ";
   cin>>n;
   int i=2;
   while (i<n){
      if (n%i!=0){
    cout<<"This is not prime for "<<i<<endl;
   }
   else{
        cout<<"This is prime for "<<i<<endl;
     }
     i++;   
   }   
    return 0;
}