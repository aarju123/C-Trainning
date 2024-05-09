//Template is comile time instiation
// Template is used for reduce the effort of developer

#include <iostream>
#include <string>

using namespace std;

#define ADD(operand1, operand2) ((operand1) + (operand2))

class A {};

template<typename T>
T add(T operand1, T operand2) {
    return operand1 + operand2;
}

int main() {
    // Write C++ code here

    cout << add<int>(90, 40) << endl;
    cout << add(20, 30) << endl;
    cout << add(20.9, 40.9) << endl;
    cout << add<string>("hello", "Aarju") << endl;
    cout << ADD(40, 590) << endl;

    A a1;
    A a2;
    // A a3 = add(a1+a2);

    return 0;
}

