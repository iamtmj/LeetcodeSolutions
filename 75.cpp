//75. Sort Colors
/*
QUESTION:
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.
EXAMPLE:
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
CONSTRAINTS:
n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.
*/
#include <iostream>
using namespace std;
void Approach1(int arr[],int len)
{
    while(1)
    {
        int mistake=0;
        for(int i=0;i<len;i++)
        {
            if(i!=len-1 && arr[i]>arr[i+1])
            {
                mistake++;
                swap(arr[i],arr[i+1]);
            }
        }
        if(mistake==0)
        {
            break;
        }
    }
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[6]={2,0,2,1,1,0};
    cout<<"Approach 1:"<<endl;
    Approach1(arr,sizeof(arr)/sizeof(int));
}