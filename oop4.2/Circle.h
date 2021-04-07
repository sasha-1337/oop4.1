#pragma once
#include "Figure.h"
class Circle : public Figure
{
private:
	double R;
public:
	Circle() { SetR(0); }
	Circle(int r) { SetR(r); }

	double GetR() { return R; }
	void SetR(int R) { this->R = R; }

	virtual double P()
	{
		return (2 * GetPi() * R);
	}
	virtual double S()
	{
		return (GetPi() * pow(R, 2));
	}
	virtual void Print()
	{
		cout << "--- ���� ---" << endl;
		cout << " �������� - " << P() << endl;
		cout << " ����� - " << S() << endl << endl;
	}
};

