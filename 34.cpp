//34. Find First and Last Position of Element in Sorted Array
/*
QUESTION:
Given an array of integers nums sorted in non-decreasing order,
find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.
EXAMPLE:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
CONSTRAINTS:
0 <= nums.length <= 10^5
-10^9 <= nums[i] <= 10^9
nums is a non-decreasing array.
-10^9 <= target <= 10^9
*/
#include <iostream>
#include <vector>
using namespace std;
vector<int> Approach1(vector<int> arr,int target)
{
    vector<int> result;
    int endIndex=arr.size()-1;
    int startIndex=0;
    int middleIndex=(startIndex+endIndex)/2;
    int rStart,rEnd;
    while(startIndex<=endIndex)
    {
        if(arr[middleIndex]==target)
        {
            rEnd=middleIndex;rStart=middleIndex;
            for(int i=middleIndex-1;i>=startIndex;i--)
            {
                if(arr[i]!=target)
                {
                    break;
                }
                else
                {
                    rStart=i;
                }
            }
            for(int i=middleIndex+1;i<=endIndex;i++)
            {
                if(arr[i]!=target)
                {
                    break;
                }
                else
                {
                    rEnd=i;
                }
            }
            result={rStart,rEnd};
            return result;
            break;
        }
        else
        {
            if(arr[middleIndex]<target)
            {
                startIndex=middleIndex+1;
            }
            else
            {
                endIndex=middleIndex-1;
            }
            middleIndex=(startIndex+endIndex)/2;
        }
    }
    result={-1,-1};
    return result;
}
int main()
{
    vector<int> nums={5,7,7,8,8,10};
    int target;
    cout<<"Target:";
    cin>>target;
    vector<int> result=Approach1(nums,target);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
}