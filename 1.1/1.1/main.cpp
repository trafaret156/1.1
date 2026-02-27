#include <iostream>
#include <cmath>
#include "FloatRange.h"
using namespace std;
int main() {
	FloatRange range;
	range.Read();
	range.Display();
	double x;
	cout << "Enter number: ";
	cin >> x;
	if (range.RangeCheak(x))
		cout << "In range" << endl;
	else
		cout << "Out of range" << endl;
	return 0;
}