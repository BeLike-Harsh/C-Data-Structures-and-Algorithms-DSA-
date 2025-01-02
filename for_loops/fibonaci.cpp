#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter your number: ";
   cin>>n;
   int a=0;
   int b=1;
   cout<<a<<" "<<b;
   int next;
   for (int i =1; i <= n; i++){
     next=a+b;
     cout<<" "<<next<<" ";
     swap(a,next);
     swap(b,a);
   }
    return 0;
}