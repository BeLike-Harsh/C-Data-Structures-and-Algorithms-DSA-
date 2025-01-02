#include <bits/stdc++.h>
using namespace std;
int main(){
    // char word[10];
    // cin>>word;//cin ignore whitespace in case of char
    // cout<<"your word is: "<<word<<endl;

    char word[10];
    cin.getline(word,50,'.');//cin.getline don't ignore whitespace and is use to input char \\\\\ the last '.' is used to complete an sntence using this char ,after '.' this was enter the word after it would'nt store
    cout<<"your word is: "<<word<<endl;
    return 0;   
}