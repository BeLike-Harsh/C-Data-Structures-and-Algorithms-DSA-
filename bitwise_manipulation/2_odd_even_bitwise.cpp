#include<bits/stdc++.h>
using namespace std;
int main(){
int num=7;
if ((num&1)==1){
    cout<<"num is odd"<<endl;
}
else if((num&1)==0){
    cout<<"num is even"<<endl;
}

return 0;
}


//To check a number is even or odd
//check if it's right most bit is 1 or 0
//if it is 1 then the number is odd
//if it is 0 then the number is even