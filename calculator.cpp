#include <iostream>
#include <string>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getData();
    void wlc();
    void add();
    void subtract();
    void multiply();
    void divide();
    void square();
};

void SimpleCalculator::getData()
{
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "Enter the value of b" << endl;
    cin >> b;
}

void SimpleCalculator::wlc()
{

    cout << "\n\nEnter an operation (+, -, /, *,exit)\n";
}

void SimpleCalculator ::add()
{
    cout << a + b << endl;
}
void SimpleCalculator ::subtract()
{
    cout << a - b << endl;
}
void SimpleCalculator ::multiply()
{
    cout << a * b << endl;
}
void SimpleCalculator ::divide()
{
    cout << a / b << endl;
}


int main()
{
    SimpleCalculator calc;
    calc.getData();
    calc.wlc();
    string input;
    cin >> input;

    if (input == "+" || input == "add" || input == "addition" || input == "sum")
    {
        calc.add();
    }
    else if (input == "-" || input == "sub" || input == "subtraction" || input == "minus")
    {
        calc.subtract();
    }
    else if (input == "/" || input == "divide" || input == "div")
    {
        calc.divide();
    }
    else if (input == "*" || input == "mul" || input == "multiply" || input == "times")
    {
        calc.multiply();
    }

    return 0;
}