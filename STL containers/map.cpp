#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    unordered_map<int , int> mpp;
    for(int i = 0; i<n; i++){
        mpp[arr[i]]++;
    }

    for(auto i : mpp){
        cout<<i.first<<"->"<<i.second<<endl;
    }
}