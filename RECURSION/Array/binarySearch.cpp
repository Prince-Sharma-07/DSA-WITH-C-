#include<bits/stdc++.h>
using namespace std;

int search(vector<int> arr , int low , int high , int key){
    if(low<=high){
      int mid = low + (high-low)/2;
      if(arr[mid] == key) return mid;
      else if(arr[mid] < key) return search(arr,mid+1,high,key);
      else return search(arr,low,mid-1,key);
    }
    return -1;
}

int main(){
  int n , key;
  cout<<"Enter the size : ";
  cin>>n;
  vector<int> arr(n);
  cout<<"Enter the elements : "<<endl;
  for(int i = 0 ; i<n; i++){
    cin>>arr[i];
  }
  cout<<"Enter the number to be searched: "<<endl;
  cin>>key;
  sort(arr.begin(), arr.end());
  cout<<"The number is present at index: "<<search(arr , 0 , n-1 , key);
  return 0;
}