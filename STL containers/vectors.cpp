#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v; //declaration
    v.push_back(9); // slower to insert
    v.push_back(8);
    v.push_back(7);
    v.push_back(3);
    v.push_back(4);

      vector<pair <int , int>> v1; //we can also create vector of pairs;

  for(int i =0; i<v.size(); i++){ 
        cout<<v[i]<<" ";
  }
   cout<<"size-> "<<v.size();
    v.emplace_back(55);  //faster method to insert
    cout<<endl<<v[5];
    cout<<endl<<v.size();



    return 0;
}