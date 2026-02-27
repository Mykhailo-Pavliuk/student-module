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
		first = f;
		second = s;
	}

	void read() {
		double f;
		double s;

		cout << "Enter drobove chislo: " << endl;
		cin >> f;
		cout << "Enter pokaznuk stypenia: " << endl;
		cin >> s;

		init(f, s);
	}

	void display() {
		cout << "Resalt: " <<  power() << endl;
	}

	double power() {
		return pow(first, second);
	}

};


int main() {
	Para para(10, 2);
	para.display();

	return 0;
}


