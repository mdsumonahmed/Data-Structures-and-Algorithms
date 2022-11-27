#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[]={6,13,14,25,33,43,51,53,64,72,84};
cout<<"Enter the valu you want to search : ";
int x;
cin>>x;
int low,high,mid;
low = 0;
high =sizeof(arr)/sizeof(arr[0])-1;
bool find_x = false;

while(low <= high){

    mid = (low+high)/2;
    if(arr[mid] == x){
        cout<<"Find "<< x <<" at index "<<mid<<endl;
        find_x = true;
    }
    if(arr[mid] < x){
        low = mid + 1;
    }
    else{
        high = mid - 1;
    }
}

if(find_x==false)
    cout<<"Item is not found"<<endl;
return 0;
}
