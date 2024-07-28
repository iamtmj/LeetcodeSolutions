//231. Power of Two
/*
QUESTION:
Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x.
EXAMPLE:
Input: n = 1
Output: true
Explanation: 2^0 = 1
CONSTRAINTS:
-2^31<=n<=2^31-1
*/
#include <iostream>
using namespace std;
int Approach1()
{
    int counter=0;
    int number;
    cout<<"Number:";
    cin>>number;
    while(number!=0)
    {
        int bit=number&1;
        number=number>>1;
        if(bit==1)
        {
            counter++;
        }
        if(counter>1)
        {
            break;
        }
    }
    if(counter==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int Approach2()
{
    int number;
    cout<<"Number:";
    cin>>number;
    int remainder=0;
    while(number!=1)
    {
        remainder=number%2;
        number/=2;
        if(remainder!=0)
        {
            break;
        }
        
    }
    if(remainder==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    cout<<"Approach 1:-"<<endl<<Approach1()<<endl;
    cout<<"Approach 2:-"<<endl<<Approach2()<<endl;
}