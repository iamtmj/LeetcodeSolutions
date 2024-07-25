//191. Number of 1 Bits
/*
QUESTION:
Write a function that takes the binary representation of a positive integer and returns the number of 
set bits it has (also known as the Hamming weight).
EXAMPLE:
Example 1:
Input: n = 11
Output: 3
Explanation:
The input binary string 1011 has a total of three set bits.
CONSTRAINTS:
1 <= n <= 2^31 - 1
*/
#include <iostream>
using namespace std;
int Approach1()
{
    int number;
    cout<<"Number:";
    cin>>number;
    int hammingWeight=0;
    int last_bit=31;//as 32 bit is reserved for the sign
    for(int i=1;i<=last_bit;i++)
    {
        if(number&1)
        {
            hammingWeight++;
        }
        number=number>>1;
    }
    return hammingWeight;
}
int main()
{
    cout<<"Approach 1:-"<<endl<<Approach1()<<endl;
}