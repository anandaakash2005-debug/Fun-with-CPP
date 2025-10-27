#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int start,int end)
{
    int pivot=arr[start];
    int i=start;
    int j=end;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=end-1)
        {
            i++;
        }
        while(arr[j]>=pivot && j>=start+1)
        {
            j--;
        }
        if(i<j)
            swap(arr[i],arr[j]);
    }
    swap(arr[start],arr[j]);
    return j;
}
void qs(vector<int>&arr,int start,int end)
{
    if(start<end)
    {
        int pindex=partition(arr,start,end);
        qs(arr,start,pindex-1);
        qs(arr,pindex+1,end);
    }
}
vector<int>quick_sort(vector<int>arr)
{
    qs(arr,0,arr.size()-1);
    return arr;
}
int main()
{
    vector<int>arr={3,1,2,4,1,5,2,6,4};
    vector<int>sorted_arr=quick_sort(arr);
    cout<<"sorted array: ";
    for(auto it:sorted_arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
