#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter your number: ";
   cin>>n;
   for (int i = 0; i < n; i++){
    int val=i;
    for (int j = 0; j <= i; j++){
         cout<<val<<" ";
         val++;
    }
    cout<<endl;
   }
    return 0;
}
