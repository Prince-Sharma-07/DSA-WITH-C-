#include<bits/stdc++.h>
using namespace std;

void merge(int arr[] , int mid ,int start , int end){
    vector<int> temp((end-start)+1);
     int low = start , high = mid+1, idx = 0;
     while(low <= mid && high <= end){
         if(arr[low] <= arr[high]){
            temp[idx] = arr[low];
            idx++;
            low++;
         }
         else{
            temp[idx] = arr[high];
            idx++;
            high++;
         }
     }
     
     while(low<=mid){
        temp[idx] = arr[low];
        idx++;
        low++;
     }

     while(high<=end){
        temp[idx] = arr[high];
        idx++;
        high++;
     }
     
     idx = 0;

     while(start <= end){
        arr[start] = temp[idx];
        start++;
        idx++;
     }

}

void mergesort(int arr[] , int start , int end){
    if(start == end) return;
    int mid = start + (end-start)/2;
    mergesort(arr , start , mid);
    mergesort(arr , mid+1 , end);
    merge(arr , mid , start , end);
}

int main(){
    int arr[10] = {10 , 9 , 8 , 6 , 7 , 5 ,2 ,4, 3, 1};
    mergesort(arr ,  0 , 9);
    for(int i = 0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}