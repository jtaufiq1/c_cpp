#ifndef CALC_H
#define CALC_H

class calc {
	
public:

	calc();
	virtual ~calc();

	// My methods
	void show_help();
	int add(int n1, int n2);
	int subtract(int a, int b);
	int multiply(int x, int y);
	double divide(int a, int b);
	int exponent(int b, int e);
	double square(double n);
	double average();
	double squareRoot(double x);

protected:
	int m_N;

private:
//	string name;

};

#endif
