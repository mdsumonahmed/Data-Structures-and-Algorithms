#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i,j,index_min;
    for(i=0; i<n-1; i++)
    {
        index_min = i;
        for(j=i+1; j<n; j++)
        {
            if(arr[index_min]>arr[j])
            {
                index_min=j;
            }
        }

        if(index_min != i)
        {
            swap(arr[i],arr[index_min]);
        }
    }

}
int main()
{
    int n;
    cout<<"Enter your element no : ";
    cin>>n;
    int arr[n];
    cout<<"Enter element : ";
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Before sorting : ";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After sorting : ";
    selectionSort(arr,n);
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}
