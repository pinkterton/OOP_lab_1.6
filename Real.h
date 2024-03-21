#pragma once
#include <string>

using namespace std;

class Real
{
public:
    class Number
    {
    private:
        double numb;

    public:
        double GetNumb() const { return numb; }
        void SetNumb(double value) { numb = value; }

        void Init(double numb);
        void Read();
        void Display() const;
        string toString() const;

        static Number Minus(const Number& l, const Number& r);
        static Number Multiply(const Number& l, const Number& r);
    };

private:
    Number number;

public:
    void SetNumber(double value) { number.SetNumb(value); }
    double GetNumber() const { return number.GetNumb(); }

    void Init(double number);
    void Read();
    void Display() const;
    string toString() const;

    friend Real sqrt(const Real& number, double s);
    double  calculation_pi(double s);
};

