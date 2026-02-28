#include <iostream>
using namespace std;

class Para {
private:
	double first;
	double second;
public:
	Para() {
		this->first = 1;
		this->second = 1;
	}

	Para(double f, double s) {
		init(f, s);
	}

	void init(double f, double s) {
		if (f > 0) {
			this->first = f;
		}
		else {
			first = 1;
		}
	
		if (s > 0) {
			this->second = s;
		}
		else {
			second = 1;
		}
	}

	void read() {
		double f;
		double s;

		cout << "Enter first katet: " << endl;
		cin >> f;
		cout << "Enter second katet: " << endl;
		cin >> s;

		init(f, s);
	}

	double hypotenuse() {
		return sqrt(first * first + second * second);
	}

	void display() {
		cout << "Gipotenuza = " << hypotenuse() << endl;
	
	}
};

int main() {
	Para para;
	para.read();
	para.display();

	return 0;
}