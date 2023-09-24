#include<bits/stdc++.h>
using namespace std;

void mergeSort(int arr[],int low,int high){
    if(low==high)return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

void merge(int arr[],int low,int mid,int high){
    vector<int> v;
    int left=low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            v.push_back(arr[left]);
            left++;
        }
        else{
            v.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        v.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        v.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=v[i-low];
    }
}

int main(){
    int arr[]={5,4,3,2,1};
    int l=5;
    mergeSort(arr,0,l-1);

    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}