//7.Reverse Integer
/*
QUESTION:
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x
Causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then
return 0
EXAMPLE:
Input: x = 123
Output: 321
CONSTRAINT:
-2^31 <= x <= 2^31 - 1
*/
#include <iostream>
using namespace std;
int Approach1()
{
    cout<<"Number:";
    int number;
    cin>>number;
    int reverse_number=0;
    while(number!=0)
    {
        int digit=number%10;
        number/=10;
        if(reverse_number>INT_MAX/10 || reverse_number<INT_MIN/10)
        {
            return 0;
        }
        else
        {
            reverse_number=reverse_number*10+digit;
        }
    }
    return reverse_number;
}
int main()
{
    cout<<"Approach 1:-"<<endl<<Approach1()<<endl;
}