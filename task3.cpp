#include <iostream>
using namespace std;

int task3() {
    int n1 = 0, n2 = 1, nextTerm = 0;

    cout << "First 10 Fibonacci numbers: ";

    for (int i = 1; i <= 10; ++i) {
        if (i == 1) {
            cout << n1 << " ";
            continue;
        }
        if (i == 2) {
            cout << n2 << " ";
            continue;
        }
        nextTerm = n1 + n2;
        cout << nextTerm << " ";
        n1 = n2;
        n2 = nextTerm;
    }

    cout << endl;
    return 0;
}

//Q2
// while: checks condition before loop, may run 0 times
// do-while: checks condition after loop, runs at least once

//Q3
// switch: multi-way branch on variable
// case: matches value
// break: exits switch
// default: runs if no case matches

//Q4
// &&: second operand eval only if first true
// ||: second operand eval only if first false
// useful for safe null pointer checks:
// if(ptr != nullptr && *ptr == 10) { ... }