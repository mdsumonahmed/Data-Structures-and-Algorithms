#include<stdio.h>

void selectionSort(int arr[], int n)
{

    int i,j,index_min,temp;

    for(i=0; i<n-1; i++)
    {
        index_min = i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[index_min])
            {
                index_min = j;
            }
        }

        if(index_min != i)
        {
            temp = arr[i];
            arr[i]=arr[index_min];
            arr[index_min]=temp;
        }
    }

}
int main()
{
    int n;
    printf("Enter your element no : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter element : ");
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before sorting : ");
    for(int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("After sorting : ");
    selectionSort(arr,n);
    for(int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}
