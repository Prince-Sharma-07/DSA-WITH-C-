#include<bits/stdc++.h>
using namespace std;

int partition(int arr[] , int start,int end){
    int pos = start;
    for(int i = start; i<=end; i++){
        if(arr[i]<=arr[end]){
            swap(arr[i] , arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quicksort(int arr[] ,int start , int end){
    if(start>=end){ 
        return;
    }
    int pivot = partition(arr,start,end);
//left
quicksort(arr, start , pivot-1);
//right 
quicksort(arr,pivot,end);
}

int main(){
    int arr[] = {10,20,9,1,6,11,45,32,12,7};
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    quicksort(arr , 0 , 9);
     for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}