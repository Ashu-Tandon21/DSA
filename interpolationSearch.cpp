#include<bits/stdc++.h>
using namespace std;
int interpolationSearch(int arr[],int low,int high,int target){
    int pivot = low+((high-low)/(arr[high]-arr[low])*(target-arr[low])); 
    if(low>=high)return pivot;
    else{
        if(target<arr[pivot])interpolationSearch(arr,low,pivot,target);
        if(target>arr[pivot])interpolationSearch(arr,pivot+1,high,target);
    }

}

int main (){
    int arr[]={1,2,3,4,5};
    cout<<interpolationSearch(arr,0,4,5);

    return 0;
}