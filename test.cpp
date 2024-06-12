#include <iostream>
using namespace std;

int multiplyBy100(int number) {
    return number * 100;
}

int main() {
    int inputNumber = 5;
    int outputNumber = multiplyBy100(inputNumber);
    cout << outputNumber << endl; // Выведет 500
    return 0;
}
