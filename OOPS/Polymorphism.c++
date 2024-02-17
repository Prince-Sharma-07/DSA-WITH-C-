#include<bits/stdc++.h>
using namespace std;

//Polymorphism: ability of objects/methods to take different forms
//Types:
//1.Compile time 
//->Function Overloading : define a number of functions with same functions name they perform differently according to the arguments passed. 
class Sum{
    public:
      void add(int a, int b){
            int sum = a+b;
            cout<<sum<<endl;
      }
      void add(int x, int y, int z){
        int sum = x+y+z;
        cout<<sum<<endl;
      }

      void add(float x, float y){
        float sum = x+y;
        cout<<sum<<endl;
      }
};

//->Operator overloading

//2. Run time



int main(){
    Sum s;
    s.add(2,3);
    s.add(2,3,4);
    s.add(float(2.3),float(3.3));
    return 0;
}