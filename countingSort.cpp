#include<bits/stdc++.h>
using namespace std;
void countingSort(int arr[],int l){
    int maxi = *max_element(arr,arr+l);
    int count[maxi+1]={0};
    int output[l];
    for(int i=0;i<l;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=maxi;i++){
        count[i]+=count[i-1];
    }
    for(int i=l-1;i>=0;i--){
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }

    for(int i=0;i<l;i++){
        arr[i]=output[i];
    }

}

int main (){
    int arr[]={5,4,3,2,1};
    int l=5;
    
    countingSort(arr,l);

    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}