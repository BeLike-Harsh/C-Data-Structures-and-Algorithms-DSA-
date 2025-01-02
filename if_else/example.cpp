#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter your char: ";
    cin>>ch;
    if (ch>=65 && ch<=90){
        cout<<"Uppercase";
    }
    else if(ch>=97 && ch<=122){
            cout<<"Lowercase";
    }
    else{
        cout<<"this is a number";
    }
    return 0;
}