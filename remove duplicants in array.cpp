#include<bits/stdc++.h>
using namespace std;
int removedup(vector<int>&arr,int n)
{
    if(n==0)
        return 0;
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[j] != arr[i])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
   return i+1;
}
int main()
{
    vector<int>arr={-2, 2, 4, 4, 4, 4, 5, 5};
    int newsize=removedup(arr,arr.size());
    for(int i=0;i<newsize;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
