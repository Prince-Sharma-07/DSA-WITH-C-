#include<bits/stdc++.h>
using namespace std;
class Customer{
     string name;
     int acc_no;
public:
    static int total_customer;
    Customer(string name , int acc_no ){
        this->name = name;
        this->acc_no = acc_no;
        total_customer++;
    }

    void print(){
        cout<<name<<" "<<acc_no<<" "<<total_customer<<endl;
    }

};
int Customer::total_customer=0;

int main(){
    Customer c1("prince" , 1);
    Customer c2("vasvi" , 2);
    Customer c3("ram" , 3);
    c1.print();
    c2.print();
    c3.print();

    return 0;
}