#include<bits/stdc++.h>
using namespace std;
void updateB(int num,int i,int val){
    num=num & ~(1<<i);
    num=num|(val<<i);
    cout<<num<<endl;
}
int main(){
 updateB(7,3,1);
 
return 0;
}