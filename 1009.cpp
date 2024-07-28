//1009. Compliment of Base 10 Integer
/*
QUESTION:
The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.
For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.
EXAMPLE:
Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
CONSTRAINTS:
0<=n<10^9
*/
#include <iostream>
#include <math.h>
using namespace std;
int Approach1()
{
    int number;
    cout<<"Number:";
    cin>>number;
    if(number==0)
    {
        return 1;
    }
    int temp=number;
    int mask=0;
    while(temp!=0)
    {
        mask=mask<<1|1;
        temp=temp>>1;
    }
    return (~number) & mask;
}
int main()
{
    cout<<"Approach 1:-"<<endl<<Approach1()<<endl;
}