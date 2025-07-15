#include <iostream>
using namespace std;

int main() {
    int num = 57;

    cout << "a. The number is : " << num << endl;

    cout << "b. After post increment by 1 the number is : " << num++ << endl;

    cout << "c. After pre increment by 1 the number is : " << ++num << endl;

    num = num + 1;
    cout << "d. After increasing by 1 the number is : " << num << endl;

    cout << "e. After post decrement by 1 the number is : " << num-- << endl;

    cout << "f. After pre decrement by 1 the number is : " << --num << endl;

    num = num - 1;
    cout << "g. After decreasing by 1 the number is : " << num << endl;

    return 0;
}

