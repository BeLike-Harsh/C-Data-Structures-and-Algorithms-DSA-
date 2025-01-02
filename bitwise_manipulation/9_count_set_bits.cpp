#include<bits/stdc++.h>
using namespace std;
int main(){
  int num=10;
  int result=0;
  while(num>0){
    result+=(num&1);
    num=num>>1;
  }
  cout<<result<<endl;
return 0;
}