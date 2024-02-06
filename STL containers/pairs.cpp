#include<bits/stdc++.h>
using namespace std;
int main(){
    //pairs are used to store two elements
    //declaration 1

    pair<int, int> p;
    p.first = 3;
    p.second = 4;
    cout<<p.first<<" "<<p.second<<endl;

    //declaration 2
    pair<int , int> p2 = {1,2};
    cout<<p2.first<<" "<<p2.second<<endl;
    
    //declaration 3

    pair<int, pair<int,int>> p3 = {1 , {2,3}};
    cout<<p3.second.second<<" "<<p3.second.first<<" "<<p3.first<<endl;

    //declaration 4

    pair<int, int> arr[] = {{1,2},{3,4},{5,6},{7,8}};
    //indexing:               0     1     2     3
    cout<<arr[0].first<<" "<<arr[1].second<<" "<<arr[3].first<<endl;

    return 0;
}