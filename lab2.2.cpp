#include <iostream>
#include "Complex.h"

using namespace std;

Complex makeComplex(double a, double b)
{
	Complex cmpl (a,b);
	return cmpl;
}

int main() {
	Complex a;
	cin >> a;
	Complex b(1, 1);
	Complex c = makeComplex(1, 1);
	cout << endl;
	cout << "a " << endl;
	cout << a << endl;
	cout << "b " << endl; 
	cout << b << endl;
	cout << "c " << endl;
	cout << c << endl;
	cout << endl;
	if (b == c) 
		cout << "b is equal c" << endl;
	else 
		cout << "b is not equal c" << endl;
	cout << endl;
	if (a<=b) 
		cout << "a is <= b" << endl;
	else 
		cout << "a is not <= b" << endl;
	cout << endl;
	if (a>c)
		cout << "a is > c" << endl;
	else
		cout << "a is not > c" << endl;
}