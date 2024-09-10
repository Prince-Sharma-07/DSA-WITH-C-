#include<bits/stdc++.h>
using namespace std;
void print(int arr[] , int index , int n){
     if(index == n) return;
     print(arr , index+1 , n);
     cout<<arr[index]<<" ";
     
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    print(arr, 0 , 6);
    return 0;
}