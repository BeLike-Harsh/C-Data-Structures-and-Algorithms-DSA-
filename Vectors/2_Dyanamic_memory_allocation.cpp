#include<bits/stdc++.h>
using namespace std;

void func(){
    int size;
    cin>>size;
    int *arr=new int[size];//New keyword is use for new memory allocation in heap memory(dynamic memory allocate in heap\\\ and static in stack)
    int x=1;
    for (int i = 0; i < size; i++){
        arr[i]=x;
        cout<<arr[i]<<",";
        x++;
    }
    delete []arr;//delete keyword is used to free allocated memory from heap \\if not then this will cause memory leak
}
int main(){
   func();

}
// In static memory the allocation will be done at compile time
// In Dyanamic memory the allocation will be done at runtime