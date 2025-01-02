#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> arr={2,4,5,7,8};
   int tar = 9;
   int fir=0,last=arr.size()-1;
   while (fir<last){
      int sum=arr[fir]+arr[last];
      if(sum==tar){
          cout<<"The index for two sum is:"<<"("<<fir<<","<<last<<")";
          break;
      }else if(sum>tar){
         last--;
      }else{
         fir++;
      }
   }
   
   return 0;
}