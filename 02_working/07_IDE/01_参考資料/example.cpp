#include "stdafx.h"

#include <iostream>
using namespace std;

int main(){
	cout << "Calculate a + b" << endl;

	double a;
	cout << "input a and press Enter" << endl;
	cout << "a = ";
	cin >> a;

	double b;
	cout << "input b and press Enter" << endl;
	cout << "b = ";
	cin >> b;

	cout << "a + b = " << a+b << endl;

	cout << "input any integer to finish...";
	int c;
	cin >> c;
	return 0;
}