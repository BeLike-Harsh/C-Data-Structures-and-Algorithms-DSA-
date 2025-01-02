#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter your number: ";
   cin>>n;
   if (n==1 || n==2)
   {
     cout<< "This a prime number"; 
   }
   
   for (int i = 2; i < n; i++){
       if (n%i==0){
        cout<<"This is not a prime number";
        break;
       }
       else{
        cout<<"This is a prime number.";
       }

   }
   
       
    return 0;
}//Break is used for coming out of block