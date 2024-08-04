//852. Peak Index in a Mountain Array
/*
QUESTION:
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
Return the index of the peak element.
Your task is to solve it in O(log(n)) time complexity.
EXAMPLE:
Input: arr = [0,1,0]
Output: 1
CONSTRAINTS:
3 <= arr.length <= 10^5
0 <= arr[i] <= 10^6
arr is guaranteed to be a mountain array.
*/
#include <iostream>
#include <vector>
using namespace std;
int Approach1(vector<int> arr)
{
    int endIndex=arr.size()-1;
    int startIndex=0;
    int peakIndex=(endIndex+startIndex)/2;
    while(startIndex<=endIndex)
    {
        if(arr[peakIndex]>arr[peakIndex+1] && arr[peakIndex]>arr[peakIndex-1])
        {
            return peakIndex;
        }
        else
        {
            if(arr[peakIndex+1]>arr[peakIndex])
            {
                startIndex=peakIndex+1;
            }
            else
            {
                endIndex=peakIndex-1;
            }
            peakIndex=(endIndex+startIndex)/2;
        }
    }
    return peakIndex;
}
int main()
{
    vector<int> mountainArr={0, 5, 9, 5, 0};
    cout<<"Approach 1:"<<Approach1(mountainArr)<<endl;
}