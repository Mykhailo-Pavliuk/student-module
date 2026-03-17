#include <iostream>
using namespace std;

class complexnechislo {
private:
	double real;
	double imag;
public:
	complexnechislo() {
		this->real = 0;
		this->imag = 0;
	}

	complexnechislo(double real, double imag) {
		this->real = real;
		this->imag = imag;
	}

	friend complexnechislo addComplex(const complexnechislo& c1, const complexnechislo& c2);

	void display() {
		cout << real << " + " << imag << "i" << endl;
	}
};

complexnechislo addComplex(const complexnechislo& c1, const complexnechislo& c2) {
	double realsum = c1.real + c2.real;
	double imagsum = c1.imag + c2.imag;

	complexnechislo result(realsum, imagsum);
	return result;
}

int main() {
	complexnechislo c1(9, 3);
	complexnechislo c2(1, 6);

	complexnechislo sum;
	sum = addComplex(c1, c2);

	cout << "RESULT: ";
	sum.display();

	return 0;
}