#include <iostream>
using namespace std;
int task2();
int main(int argc, char* argv[]) {
    cout<<argc<<" arguments received"<<endl;
    for(int i=0;i<argc;i++) {
        cout<<"Argument "<<i<<" " <<argv[i]<<endl;
    }
    task2();
    return 0;
}


//Q2
// it is start of program, where execution starts so it shows from where program should be executed
// using static in java, makes main not instance of some class rather itself can be called

//Q3
// C++                      Java
// int                      void
// char **argv              String[] args
// none                     public static

//Q4
// integer output shows result of execution, if it is 0, execution was successful and if it is other than 0,
// then there is err
// System.exit(int status) by using this command




