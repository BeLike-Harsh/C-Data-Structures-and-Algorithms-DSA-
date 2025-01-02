#include<bits/stdc++.h>
using namespace std;
int main(){
int x=3,n=5;
int ans=1;
while (n>0){
    int last=n&1;
    if (last){
        ans*=x;
        
    }
    x*=x;
    n=n>>1;
}
cout<<ans<<endl;
return 0;
}