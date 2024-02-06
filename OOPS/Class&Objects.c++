#include<bits/stdc++.h>
using namespace std;

//Class is a fundamental unit of OOPS.
//It is a user defined datatype.
// define some datatypes/poperties & methods/functions

class fruit{
    public: //by default value remains private.
        string name;
        string color;
        float price;
        // void print(){
        //     cout<<"from fruit\n";
        // }
};


int main(){
    
    //objects are variable  of type class.
    fruit apple;
    apple.name = "apple";
    apple.color = "red";
    apple.price = 10.5;

    cout<<apple.price<<" "<<apple.color<<endl;
}