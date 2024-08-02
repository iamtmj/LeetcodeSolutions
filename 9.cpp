//9. Palindrome Number
/*
QUESTION:
Given an integer x, return true if x is a palindrome, and false otherwise.
EXAMPLE:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
CONSTRAINTS:
-2^31 <= x <= 2^31 - 1
*/
#include <iostream>
#include <vector>
using namespace std;
bool Approach1(int n)
{
    if(n<0)
    {
        return false;
    }
    vector<int> digits;
    while(n!=0)
    {
        int d=n%10;
        digits.push_back(d);
        n/=10;
    }
    int size=digits.size();
    for(int i=0;i<size;i++)
    {
        if(digits[i]!=digits[size-1-i])
        {
            return false;
        }
    }
    return true;

}
int main()
{
    int number;
    cout<<"Number:";
    cin>>number;
    cout<<"Approach 1:"<<Approach1(number);
    cout<<endl;
}