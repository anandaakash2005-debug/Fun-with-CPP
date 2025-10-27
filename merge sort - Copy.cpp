#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int low,int mid,int high)
{
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
            {
                temp.push_back(arr[left]);
        left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
    }
            while(left<=mid)
            {
                temp.push_back(arr[left]);
        left++;
            }
            while(right<=high)
            {
                temp.push_back(arr[right]);
                right++;
            }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
}
void ms(vector<int>&arr,int low,int high)
{
    if(high == low)
        return;
    int mid=(high+low)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
}

void merge_sort(vector<int>&arr,int n)
{
    ms(arr,0,n-1);
}
int main()
{
    vector<int>arr={3,2,8,5,1,4,23};
    merge_sort(arr,arr.size());
    cout<<"sorted array: ";
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
