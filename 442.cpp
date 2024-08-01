//442. Find All Duplicates in an Array
/*
QUESTION:
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each 
integer appears once or twice, return an array of all the integers that appears twice.
You must write an algorithm that runs in O(n) time and uses only constant extra space.
EXAMPLE:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
CONSTRAINTS:
n == nums.length
1 <= n <= 10^5
1 <= nums[i] <= n
Each element in nums appears once or twice.
*/
#include <iostream>
using namespace std;
void Approach1(int arr[],int len)
{
    int result[len];
    int size=0;
    for(int i=0;i<len;i++)
    {
        int c=0;
        for(int j=0;j<len;j++)
        {
            if(arr[i]==arr[j])
            {
                c+=1;
            }
        }
        if(c>1)
        {
            bool isFound=0;
            for(int k=0;k<size;k++)
            {
                if(arr[i]==result[k])
                {
                    isFound=1;
                }
            }
            if(!isFound)
            {
                result[size]=arr[i];
                size+=1;
            }
        }   
    }
    for(int i=0;i<size;i++)
    {
        cout<<result[i]<<" "; 
    }
}
void Approach2(int arr[],int len)
{
    int frequency[len];
    for(int i=0;i<len;i++)
    {
        frequency[i]=0;
    }
    for(int i=0;i<len;i++)
    {
        frequency[arr[i]-1]++;
    }
    for(int i=0;i<len;i++)
    {
        if(frequency[i]>1)
        {
            cout<<i+1<<" ";
        }
    }

}
int main()
{
    int arr[8]={4,3,2,7,8,2,3,1};
    cout<<"Approach 1:"<<endl;
    Approach1(arr,sizeof(arr)/sizeof(int));
    cout<<endl;
    cout<<"Approach 2:"<<endl;
    Approach2(arr,sizeof(arr)/sizeof(int));
    cout<<endl;
}