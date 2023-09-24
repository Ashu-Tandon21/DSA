#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[],int l,int div){
    int output[l];
    int count[10]={0};
    for(int i=0;i<l;i++){
        count[(arr[i]/div)%10]++;
    }
    for(int i=1;i<10;i++){
        count[i]+=count[i-1];
    }
    for(int i=l-1;i>=0;i--){
        output[count[(arr[i]/div)%10]-1]=arr[i];
        count[(arr[i]/div)%10]--;
    }
    for(int i=0;i<l;i++){
        arr[i]=output[i];
    }
}

void radix(int arr[],int l){
    int maxi=*max_element(arr,arr+l);
    for(int div =1;maxi/div>0;div*=10){
        countSort(arr,l,div);
    }
}



int main(){
    int arr[]={5,4,3,2,1};
    int l=5;
    radix(arr,l);
    for(int i=0;i<l;i++)cout<<arr[i]<<" ";
    
    return 0;
}