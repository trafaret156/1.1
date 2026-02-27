#pragma once
class FloatRange
{
	double first, second;
public:
	double GetFirst() const { return first; }
	double GetSecond() const { return second; }
	bool SetFirst(double value);
	bool SetSecond(double value);
	bool Init(double a, double b);
	void Read();
	void Display();
	bool RangeCheak(double x) const; 
};