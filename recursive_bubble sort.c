#include<bits/stdc++.h>
using namespace std;
void rebubble_sort(int arr[],int n)
{
    for(int i=n-1;i>=1;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j-1]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
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

    rebubble_sort(arr,num);
    for(int i=0;i<num;i++)
    {
        cout<<arr[i];
    }

    return 0;
}
