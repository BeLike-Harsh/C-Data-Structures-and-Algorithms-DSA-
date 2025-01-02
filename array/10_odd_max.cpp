#include<bits/stdc++.h>
using namespace std;
int main(){
 int arr[]={4,8,3,2,5,7,10,11};
 int n=sizeof(arr)/sizeof(arr[0]);
 int odd1,odd2,maxi;
 for (int i = 0; i < n; i++){
   if (arr[i]%2!=0){
     odd1=arr[i];
   }
    if (arr[i+1]%2!=0){
     odd2=arr[i+1];
   }
   maxi=max(odd1,odd2);
   
 }
 cout<<maxi;
return 0;
}