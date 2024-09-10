#include<bits/stdc++.h>
using namespace std;
void subsequence(int arr[] , int index , int n , vector<vector<int>> &ans , vector<int> temp){
   if(index == n){
    ans.push_back(temp);
    return;
   }
   //Not included
   subsequence(arr , index+1 , n , ans , temp);
   //included
   temp.push_back(arr[index]);
   subsequence(arr , index+1 , n , ans , temp);
}

int main(){
    int arr[] = {1,2,3};
    int n = 3;
    vector<vector<int>> ans;
    vector<int> temp;
    int index  = 0;
    subsequence(arr , index , n , ans , temp);
    for(int i = 0; i<ans.size(); i++){
        cout<<"{";
        for(int j = 0; j<ans[i].size(); j++){
             cout<<ans[i][j]<<" ";
        }
        cout<<"}";
        cout<<endl;
    }
}