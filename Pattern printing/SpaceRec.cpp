#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the pattern\n";
    cin>>n>>m;
for (int r = 1; r<=n; r++){
    for (int c = 1; c<=m; c++){
        if(r==1 || r==n || c==1 || c==m){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
}