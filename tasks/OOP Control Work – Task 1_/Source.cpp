#include <iostream>
using namespace std;

class Drib {
private:
	double chiselnuk;
	double znamennuk;
public:
	Drib() {
		this->chiselnuk = 1;
		this->znamennuk = 1;
	}

	Drib(double c, double z) {
		init(c,z);
	}
	
	void init(double c, double z) {
		if (c > 0) {
			chiselnuk = c;
		}
		else {
			chiselnuk = 1;
		}

		if (z > 0) {
			znamennuk = z;
		}
		else {
			znamennuk = 1;
		}
	}

	void read() {
		double c;
		double z;

		cout << "Enter chiselnuk: ";
		cin >> c;

		cout << "Enter znamennuk: ";
		cin >> z;

		init(c, z);
	}

	double result() {
		return (chiselnuk * 1.0) / znamennuk;
	}

	void print() {
		cout << "Drib = " << chiselnuk << "/" << znamennuk << endl;
	}
};

int main() {
	Drib drib;
	drib.read();
	drib.print();

	return 0;
}