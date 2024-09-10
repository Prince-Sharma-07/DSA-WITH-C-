#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2!=0) return 0;
for(int i = 1; i<=n; i+2){
    int j = 0;
    for(j = 0; j<n-i; j++){
        cout<<" ";
    }
    for(int k = j; j<(n+1)/2; k++){
        cout<<"*";
    }
    cout<<endl;
}
}