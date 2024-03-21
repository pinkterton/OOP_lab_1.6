#include "Real.h"
#include <iostream>

using namespace std;

int main()
{
    Real::Number i, k;

    i.Read();
    k.SetNumb(152);
    k.Display();
    cout << endl;
    
    Real::Number result = Real::Number::Minus(i, k);
    result.Display();
    cout << endl;

    Real::Number result_two = Real::Number::Multiply(i, k);
    result_two.Display();
    cout << endl;

    Real n;

    n.Read();

    int power = 3;

    Real m = sqrt(n, power);
    std::cout << "(Sqrt)Number = " << m.GetNumber() << endl;

    n.calculation_pi(power);
    std::cout << "pi^" << power << " = " << n.calculation_pi(power) << endl;

    return 0;
}