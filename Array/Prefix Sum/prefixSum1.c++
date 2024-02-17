#include<bits/stdc++.h>
using namespace std; 

void prefixSum(vector<int> arr){
    vector<int> ans;
    ans.push_back(arr[0]);
   for(int i = 0; i<arr.size()-1; i++){
    int sum = 0;
    for(int j = 0; j<=i+1; j++){
        sum += arr[j];
    }
    ans.push_back(sum);
   } 
   cout<<"The Prefix sum is :"<<endl;
    for(auto i : ans){
        cout<<i<<" ";
    }
}

int main(){
   int n,no;
   vector<int> arr;
   cout<<"Enter the size of array"<<endl;
   cin>>n;
   for(int i = 0; i<n; i++){
    cin>>no;
    arr.push_back(no);
   }
   prefixSum(arr);

return 0;
}