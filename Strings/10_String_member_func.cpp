#include <bits/stdc++.h>
using namespace std;
int main(){
    string str="mallu";
    cout<<str.length()<<endl;
    cout<<str.at(3)<<endl;
    cout<<str.substr(1,3)<<endl;//the 1st is index no. , the 2nd is size for substring
    cout<<str.find("l",2);//the 1st is the word or letter you want to find ,  the 2nd starting index for finding , this return -1 if finding element is not string
    return 0;
}