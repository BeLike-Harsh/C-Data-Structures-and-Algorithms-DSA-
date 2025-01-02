#include<bits/stdc++.h>
using namespace std;
int main(){
 int num=7,i=5;
 int mask= 1<<i;
 if (!(num & mask)){
    cout<<"0"<<endl;
 }else{
    cout<<"1"<<endl;
 }
 
return 0;
}