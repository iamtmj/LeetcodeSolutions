//1. Two Sum
/*
QUESTION:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
EXAMPLE:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
CONSTRAINTS:
2 <= nums.length <= 10^4
-10^9 <= nums[i] <= 10^9
-10^9 <= target <= 10^9
Only one valid answer exists
*/
#include <iostream>
using namespace std;
void Approach1(int arr[],int target,int size)
{
    for(int i=0;i<size;i++)
    {
        int e=arr[i];
        bool isValid=0;
        if(target>=e)
            {
                isValid=1;
            }
            if(target<0 && e<0 && target<e)
            {
                isValid=1;
            }
            
        bool isBreak=false;
        if(isValid)
        {
            int remainder=target-e;
            for(int j=0;j<size;j++)
            {
                if(arr[j]==remainder && j!=i)
                {
                    cout<<i<<" "<<j<<endl;
                    isBreak=1;
                    break;
                }
            }
        }
        if(isBreak)
        {
            break;
        }
    }
}
int main()
{
    int nums[3]={3,2,4};
    int target=6;
    cout<<"Approach 1:"<<endl;
    Approach1(nums,target,sizeof(nums)/sizeof(int));
}
