#include<bits/stdc++.h>
using namespace std;

//binding of methods and variables together into a single unit i.e a Class.
//data is only accessible from the class methods
//also leads to data abstraction/hiding
//class->Abstract Data Type (ADT)

class ABC{
    int x;  // it is private by default cannot be accessed outside.

    public: 
       void set(int n){    // but these methods are public so they can be accessed from outside ,and they are in the class of x so they can access x
            x = n;        // and through these public methods we can set and get x.
       }
       int get(){
        return x;
       }

};

int main(){
   ABC obj1;
   obj1.set(3);
   cout<<obj1.get()<<endl;

   return 0;
   
}


// Abstraction : enables us to display only essential information while hiding inplementation details.

// for eg function max(a,b) return max, it does not show implementation details
 
