#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int low,int high,int target){
    int mid = (low+ high)/2;
    if(low>=high)return mid;
    if(arr[mid]>target)binarySearch(arr,0,mid,target);
    if(arr[mid]<target)binarySearch(arr,mid+1,high,target);
}

int main(){
    int arr[]={1,2,3,4,5};
    int l=5;
    int target = 5;
    cout<<binarySearch(arr,0,l-1,target)+1;

    return 0;
}