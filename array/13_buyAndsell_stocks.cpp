#include<bits/stdc++.h>
using namespace std;
void maxP(int price[],int n){
   int bestBuy[100000];
   bestBuy[0]=INT16_MAX;
   int MAxP[100000],maxi;
   for (int i = 1; i < n; i++){
       bestBuy[i]=min(bestBuy[i-1],price[i-1]);
       cout<<bestBuy[i]<<",";
   }
   cout<<endl;
   for (int i = 0; i < n; i++){
      MAxP[i]=price[i]-bestBuy[i];
      if(i>=1){
         maxi=max(MAxP[i],MAxP[i-1]);
      }
   }
   cout<<maxi;
}
int main(){
int price[]={7,1,5,3,6,4};
int n=sizeof(price)/sizeof(price[0]);
maxP(price,n);


return 0;
}