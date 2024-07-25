//1281. Subtract the Product and Sum of Digits of an Integer
/*
QUESTION:
Given an integer number n, return the difference between the product of its digits and the sum of its digits.
EXAMPLE:
Input: n = 234
Output: 15 
EXPLANATION: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15
CONSTRAINTS:
1 <= n <= 10^5
*/
#include <iostream>
#include <cmath> //use this header for Approach2
using namespace std;
int Approach1()
{
    int number;
    cout<<"Number:";
    cin>>number;
    int sum=0;
    int product=1;
    while(number!=0)
    {
        int d=number%10;
        sum+=d;
        product*=d;
        number/=10;
    }
    return product-sum;
}
int Approach2()
{
    int number;
    cout<<"Number:";
    cin>>number;
    int sum=0;
    int product=1;
    int total_digits=(log10(number))+1;
    for(int i=total_digits-1;i>=0;i--)
    {
        int div=pow(10,i);
        int q=number/div;
        number=number-q*div;
        sum+=q;
        product=product*q;
    }
    return product-sum;

}
int main()
{
    cout<<"Approach 1:-"<<endl<<Approach1()<<endl;
    cout<<"Approach 2:-"<<endl<<Approach2()<<endl;
}