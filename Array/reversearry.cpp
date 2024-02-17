#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Enter the elements: \n";
    for(int i=0; i<v.size(); i++){
        v.push_back(i);
    }
    int j = 0;
    while(j<v.size()/2){
              swap(v[j++],v[v.size()-1-j]);
    }
    return 0;
}