#include<iostream>
using namespace std;
int value(int &vum){
    vum = vum+1;
    return vum;
}
int main(){
    int sum = 5;
    int newvalue = value(sum);
    cout<<newvalue<<endl;
    cout<<sum;
    return 0;
}