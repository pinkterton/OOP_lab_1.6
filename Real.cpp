#include "Real.h"
#include <string>
#include <cmath>
#include <sstream>
#include <iostream>

using namespace std;

void Real::Init(double number)
{
	SetNumber(number);
}

void Real::Read()
{
	number.Read();
	Init(GetNumber());
}

void Real::Display() const
{
	cout << endl;
	number.Display();
}

string Real::toString() const
{
	stringstream sout;
	sout << number.toString() << endl << "Power = " << s;
	return sout.str();
}

Real sqrt(const Real& number, double s)
{
	Real result;
	double value = pow(number.GetNumber(), 1.0 / s);
	result.SetNumber(value);
	return result;
}

double Real::calculation_pi(double s)
{
	double const PI = 3.14159265;
	double result_one = pow(PI, s);
	return result_one;
}

void Real::Number::Init(double numb)
{
	SetNumb(numb);
}

void Real::Number::Read()
{
	cout << "Write Number = "; 
	cin >> numb; 
	Init(numb);
}

void Real::Number::Display() const
{
	cout << "Number = " << numb << endl;
}

string Real::Number::toString() const
{
	stringstream sout; 
	sout << "(String)Number =  " << GetNumb(); 
	return sout.str();
}

Real::Number Real::Number::Minus(const Real::Number& l, const Real::Number& r)
{
	Real::Number t;
	if (l.numb >= r.numb)
		t.numb = l.numb - r.numb;
	else if (l.numb < r.numb)
		t.numb = r.numb - l.numb;
	return t;
}

Real::Number Real::Number::Multiply(const Real::Number& l, const Real::Number& r)
{
	Real::Number t;
	t.numb = l.numb * r.numb;
	return t;
}