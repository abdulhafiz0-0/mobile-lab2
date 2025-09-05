#include <iostream>
using namespace std;

int task2() {
    int a=10;
    int b=20;

    cout <<"before swap: "<<a<<", "<<b<<endl;
    a=b*a;
    b=a/b;
    a=a/b;
    cout<<"after swap: "<<a<<", "<<b<<endl;
    return 0;
}


//Q2
// primitive types will be saved in stack; non primitives will be
// saved in heap stack and their address in heap stack will be saved stack

//Q3
// it is range of function or variable where it can be used
// local scope can be used only inside declared function or class
// class level can be used in other classes too

//Q4
// in java and c++ u need to define type of variable and that is static typing, and iin dynamic typing
// types will be checked when u run program






