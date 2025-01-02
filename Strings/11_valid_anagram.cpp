#include <bits/stdc++.h>
using namespace std;
bool anagram(string str,string str2,int n){
    int i=0;
    sort(str2.begin(),str2.end());
    sort(str.begin(),str.end());
    if (str.length()==str2.length())
    {
        while (i<n){
        if (str[i]!=str2[i]){
            cout<<str<<","<<str2<<": are not Anagram";
            return false;
        }
         i++;
      }
      cout<<str<<","<<str2<<": are Anagram";
      return true;
    }
    else{
        cout<<str<<","<<str2<<": are not Anagram";
    }
 
}
int main(){
    string str="anagram",str2="nagarams";
    anagram(str,str2,str.length());
    return 0;
}