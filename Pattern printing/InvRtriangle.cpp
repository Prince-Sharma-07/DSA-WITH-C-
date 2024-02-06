#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int i = n;
    while(i>0){
        int j=i;
        while(j>0){
            cout<<"* ";
            j--;
        }
        cout<<endl;
       i--;
    }
}