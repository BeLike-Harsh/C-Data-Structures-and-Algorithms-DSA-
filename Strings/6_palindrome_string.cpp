#include <bits/stdc++.h>
using namespace std;
bool reverse(char str[],int n){
      int start=0,end=n-1;
      while (start<=end){
        if(str[start]!=str[end]){
         cout<<str<<" is not a palindrome";
         return false;
      }
        start++;
        end--;
        }
         cout<<str<<" is a palindrome";
         return true;
      }

int main(){
      char str[10];
      cin.getline(str,10);
      reverse(str,strlen(str));
      return 0;
}
