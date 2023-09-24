#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void bubbleSort(int arr[],int l){
    for(int i=0;i<l;i++){
        for(int j=0;j<l-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[]={5,4,3,2,1};
    int l=5;
    bubbleSort(arr,l);
    for(int i=0;i<l;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}