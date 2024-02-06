#include<bits./stdc++.h>
using namespace std;
template <typename S>
ostream& operator<<(ostream& os, const vector<S>& vector)
{
    for (auto element : vector) {
        os << element << " ";
    }
    return os;
}

int main(){
     vector <int> v = {1,1,2,4,4,5,6,7};
     v.erase(unique(v.begin(),v.end()) , v.end());
     cout<<v;
        return 0;
}