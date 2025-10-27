#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int mini=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[mini]>arr[j])
            {
               mini=j;
            }
        }
         int temp=arr[i];
         arr[i]=arr[mini];
         arr[mini]=temp;
    }
}
int main()
{
    int num;
    cout<<"Enter size of an array: ";
    cin>>num;

    int arr[num];
    cout<<"Enter element: ";
    for(int i=0;i<num;i++)
      {
          cin>>arr[i];
      }

      selection_sort(arr,num);
      for(int i=0;i<num;i++)
      {
          cout<<arr[i]<<" ";
      }
      return 0;
}
