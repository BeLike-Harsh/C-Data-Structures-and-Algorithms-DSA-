#include <bits/stdc++.h>
using namespace std;
int main(){
    char srt[]="mallu";//this is also the way assing value to char ARRAY this will automatically take '\0' in last 
    char str[]={'m','a','l','l','u','\0'};//IN ARRAY STRING THE LAST CHARACTER OF ARRAY SHOULD BE STORED '\0'
    // cout<<str[0];
    // cout<<str[1];
    // cout<<str[2];
    // cout<<str[3];
    // cout<<str[4];
    cout<<strlen(str)<<"\n";//this func does not count '\0' in length
    cout<<str<<endl;//IN ARRAY STRING THE ARR POINTER POITNS THE WHOLE CHARACTER STORED IN ARRAY VALUE(NOT THE ADDRESS)
    // "Hello World"//is known as String Literals,->means something value has defined
    //'\0' IS KNOWN AS NULL CHAR ,IT WORKS AS FULL STOP USE IN ENGLISH OR DEFINE THE WORD COMPLETION.  
     cout<<srt;
     return 0;
}