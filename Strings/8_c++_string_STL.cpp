#include <bits/stdc++.h>
using namespace std;
int main(){
    // string str="hello";
    // cout<<str;
    // str = "mallu"; //we can assing value to string
    // cout<<str;

    string str;
    getline(cin,str);//here getline used instead of cin.getline of char Arr,because it's a string
    cout<<str<<endl;
    cout<<str[0]<<endl;
    cout<<str[1]<<endl;//here we can use also these as used in array
    cout<<str[2]<<endl; 
      return 0;
}