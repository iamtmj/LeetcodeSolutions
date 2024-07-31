//1207. Unique Number of Occurrences
/*
QUESTION:
Given an array of integers arr, return true if the number of occurrences of each value in 
the array is unique or false otherwise.
EXAMPLE:
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
CONSTRAINTS:
1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000
*/
#include <iostream>
using namespace std;
bool Approach1(int arr[],int len)
{
    int uniqueArr[len];
    int size=0;
    for(int i=0;i<len;i++)
    {
        bool isFound=0;
        for(int j=0;j<size;j++)
        {
            if(uniqueArr[j]==arr[i])
            {
                isFound=1;
                break;
            }
        }
        if(!isFound)
        {
            uniqueArr[size]=arr[i];
            size+=1;
        }
    }
    int occur[size];
    int sizeO=0;
    for(int i=0;i<size;i++)
    {
        int counter=0;
        for(int j=0;j<len;j++)
        {
            if(uniqueArr[i]==arr[j])
            {
                counter+=1;
            }
        }
        occur[sizeO]=counter;
        sizeO+=1;
    }
    for(int i=0;i<sizeO;i++)
    {
        int counter=0;
        for(int j=0;j<sizeO;j++)
        {
            if(occur[i]==occur[j])
            {
                counter+=1;
            }
        }
        if(counter>1)
        {
            return false;
        }
        
    }
    return true;
}
int main()
{
    int arr[6]={1,2,2,1,1,3};
    int arr2[2]={1,2};
    int arr3[10]={-3,0,1,-3,1,1,1,-3,10,0};
    cout<<"Array 1 via Approach 1:"<<Approach1(arr,6)<<endl;
    cout<<"Array 2 via Approach 1:"<<Approach1(arr2,2)<<endl;
    cout<<"Array 3 via Approach 1:"<<Approach1(arr3,10)<<endl;
}