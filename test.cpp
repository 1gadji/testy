#include <iostream>
using namespace std;

// Класс B
class B {
public:
    int multiplyBy100(int number) {
        return number * 100;
    }
};

// Класс A
class A {
private:
    B* b;
public:
    A(B* bInstance) : b(bInstance) {}

    int callMultiplyBy100(int number) {
        return b->multiplyBy100(number);
    }
};

// Тест
void testFunction() {
    B b;
    A a(&b);
    int inputNumber = 5;
    int expectedOutput = 500;
    int outputNumber = a.callMultiplyBy100(inputNumber);
    
    if (outputNumber == expectedOutput) {
        cout << "Тест пройден. Функция callMultiplyBy100 корректно вызывает функцию multiplyBy100." << endl;
    } else {
        cout << "Тест не пройден. Ожидалось: " << expectedOutput << ", получено: " << outputNumber << endl;
    }
}

int main() {
    setlocale(LC_ALL, "rus");
    testFunction();
    return 0;
}
