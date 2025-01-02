#include<bits/stdc++.h>
using namespace std;
int main(){
int num=31;
if((num&(num-1))==0){
 cout<<"The num is power of 2"<<endl;
}
else{
    cout<<"The num is not power of 2"<<endl;
}
return 0;
}