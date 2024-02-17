#include<bits/stdc++.h>
using namespace std;

//a classs inherits properties of another class.
//eg: (child class/ sub class) class B <--- class A (parents class/super class)
//eg: vehicle is the parent of car , truck and scooter

//Access Specifiers & Modes of inheritance.
// -> Public - Data & methods can be accessed from anywhere in the code.
// -> Protected - accessible in own class, parent class & derived class.
// -> Private - accessible only in own class.

//Types of Inheritance
//-> Single Inhertance - class B direct inherits the properties of class A

// class Parent{

//     public:
//       int x;
    
//     protected:
//       int y;

//     private: 
//       int z;

// };

// class Child1 : public Parent{
//     //x will remain public
//     //y will remain protected
//     //z will be inaccessible
// };

// class Child2 : private Parent{
//     //x will be private
//     //y will remain private
//     //z will be inaccessible
// };

// class Child3 : protected Parent{
//     //x will be protected
//     //y will be protected
//     //z will be inaccessible
// };

//single inheritance:

// class Parent {
//     public:
//     Parent(){
//         cout<<"From parent"<<endl;
//     }
// };

// class Child : public Parent{
//     public:
//     Child(){
//         cout<<"From child"<<endl;
//     }
// };

// //Multilevel Inheritance 

// class GrandChild : public Child{
//     public:
//     GrandChild(){
//         cout<<"From GrandChild"<<endl;
//     }
// };

//Multiple inheritance - Multiple parent class

class Parent1{
    public: 
    Parent1(){
    cout<<"From Parent1"<<endl;
    }
};

class Parent2{
    public:
    Parent2(){
    cout<<"From Parent2"<<endl;
    }
};

class Child : public Parent1 , public Parent2 {
    public:
    Child(){
    cout<<"From Child"<<endl;
    }
};

//Hierarchical Inheritance - One parent have multiple child 
//Hybrid Inheritance - combination of more than 1 inheritance types.

//Diamond problem: base class have multiple parent classes inheriting from a commom ansestor.
//eg: class A inherits property from class D and class C but class C and D inherits their properties from a class D
//    so class A get redundant properties on class D multiple times from class A as well as B.

int main(){
    Child c; 
   return 0;
}