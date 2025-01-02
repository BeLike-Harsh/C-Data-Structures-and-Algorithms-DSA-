#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<(3 & 5)<<endl;//bitwise AND
cout<<(3 | 5)<<endl;//bitwise OR
cout<<(3 ^ 5)<<endl;//bitwise XOR
cout<<(~6)<<endl;//bitwise NOT
cout<<(7<<2)<<endl;//left shift(this << will equal to {a * 2^b})
cout<<(7>>2)<<endl;//right shift(this >> will equal to {a / 2^b})
return 0;
}

//working of bitwise NOT 
//2's compliment concept
//for ex:- ~6 = (lets take ex in 8 bits)00000110 NOT 11111001=-7 ??
//to know first we have to calculate 1's compliment:-//the 1st bit most significant bit because it decide whether a number is positive or negative
//if MSB is =1 then number is negative or MSB is =0 then number is positive
//before calculating 1's compli.. we have to not take MSB in calculation 
//1111001 (1's) = 0000110
//then 2's compli.. :-
//0000110
//     +1(we have to add one for cslculating 2's...)
//0000111
//now, 10000111= -7