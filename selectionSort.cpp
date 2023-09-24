#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void selectionSort(int arr[],int l){
    for(int i=0;i<l-1;i++){
        int mini=i;
        for(int j=i;j<l;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}

int main(){

    int arr[]={5,4,3,2,1};
    int l=5;

    selectionSort(arr,l);

    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}