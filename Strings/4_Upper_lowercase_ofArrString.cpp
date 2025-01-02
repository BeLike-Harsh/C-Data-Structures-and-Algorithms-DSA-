#include <bits/stdc++.h>
using namespace std;
void toUpper(char str[],int n){
    for (int i = 0; i < n; i++)
      {
        if(str[i]>='a' && str[i]<='z'){
             str[i]-=32;
        }
      }
      cout<<str;

}

void toLower(char str[],int n){
    for (int i = 0; i < n; i++)
      {
        if(str[i]>='A' && str[i]<='Z'){
             str[i]+=32;
        }
      }
      cout<<str;

}

int main(){
      char str[]="ApplE";
      toUpper(str,strlen(str));
      cout<<endl;
      toLower(str,strlen(str));
    
}