#include<bits/stdc++.h>
using namespace std;
void reinsertion_sort(int arr[],int n)
{
   if(n==1)
    return ;
   int didswap=0;
        for(int j=1;j<n;j++)
        {
            if(arr[j-1]>arr[j])
            {
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                didswap=1;
            }
        }
        if(didswap == 0)
            return ;
        reinsertion_sort(arr,n-1);
}
int main()
{
    int num;
    cout<<"Enter size of an array: ";
    cin>>num;

    int arr[num];
    cout<<"Enter elements: ";
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    reinsertion_sort(arr,num);
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
