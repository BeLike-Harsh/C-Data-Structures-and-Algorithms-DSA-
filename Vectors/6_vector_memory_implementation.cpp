#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> vec={1,6,4,5};
   cout<<"size:"<<vec.size()<<endl;
   cout<<"capacity:"<<vec.capacity()<<endl;
   vec.push_back(6);//To add element in vector in last
   cout<<"size:"<<vec.size()<<endl;
   cout<<"capacity:"<<vec.capacity()<<endl;
   vec.pop_back();//To remove last element in vector
 return 0;
}