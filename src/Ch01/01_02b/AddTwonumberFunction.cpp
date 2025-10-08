// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 
// add function


#include<iostream>
using namespace std;
int add(int a, int b){

    int result;
    result=a+b;
    return result;
}

int main(){
    int a=180;
    int b=21;
    int Result=add(a,b);
    cout<<Result<<endl;
    return 0;
}
