#include<bits/stdc++.h>
using namespace std;
void replacearr(vector<int>&arr,int n)
{
    vector<int>temp;

    for(int i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0)
        {
            temp.push_back(arr[i]);
        }
    }

    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
}
int main()
{
    vector<int>arr={0, 1, 4, 0, 5, 2};

    replacearr(arr,arr.size());
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    return 0;
}
