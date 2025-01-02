#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter your number: ";
   cin>>n;
   int s=0;
   int p=1;
   for (int i = 0; i <3; i++){
      int val=n%10;
        s+=val;
        p*=val;
        n=n/10;
   }
   cout<<"Sum: "<<s<<endl;
   cout<<"Product: "<<p;
     return 0;
}