#include<bits/stdc++.h>
using namespace std;

// Constructor: used to initialise an object.
//              this is function which is called when an object is created.
//              its function has the same name as class name.
// Types : -default constructor
//         -parameterised constructor
//         -copy constructor

// Destructor : Function is called when object is deleted
//              Cannot pass any parameters
//  syntax :    ~class name(){    }

class Rectangle{
    public: 
     int l;
     int b;
     Rectangle(){ //default constructor -called when no args passed
        l=0;
        b=0;
     }
    
    Rectangle(int x, int y){ // parameterised constructor - called when args passed 
       l=x;
       b=y;
    }

    Rectangle(Rectangle& r){  // copy constructor - when we want to initialize an Obj by another exisitng obj
          l = r.l;
          b = r.b;
    }
 
    ~Rectangle(){    // Destructor
        cout<<"Destructor is called"<<endl;
    }

};

int main(){

    // Rectangle r1;  // static allocation
    // cout<<r1.l<<" "<<r1.b<<endl;

    Rectangle* r1 = new Rectangle();  //dynamic allocation to use delete keyword
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;

    Rectangle r2(4,5);
    cout<<r2.l<<" "<<r2.b<<endl;

      Rectangle r3(r2);
// or Rectangle r3 = r2;
    cout<<r3.l<<" "<<r3.b<<endl;
 
    return 0;
}