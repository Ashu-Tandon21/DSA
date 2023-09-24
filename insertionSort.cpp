#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void insertionSort(int arr[],int l){
    for(int i=0;i<l;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

int main(){

    int arr[]={5,4,3,2,1};
    int l=5;

    insertionSort(arr,l);

    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}