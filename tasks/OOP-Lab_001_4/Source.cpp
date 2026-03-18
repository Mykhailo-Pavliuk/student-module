#include <iostream>
using namespace std;

class Para {
private:
	double first;
	int second;
public:

	Para() {
		this->first = 1;
		this->second = 1;
	}

	Para(double f, int s) {
		init(f, s);
	}

	void read() {
		int var1;
		int var2;
		cout << "Enter your oklad: " << endl;
		cin >> var1;
		cout << "Vidpracovani dni: " << endl;
		cin >> var2;

		init(var1, var2);
	}

	void init(double f, int s) {

		if (f >= 0) {
			first = f;
		}
		else {
			first = 1;
		}

		if (s >= 0 && s < 32) {
			second = s;
		}
		else {
			second = 1;
		}

	}

	void display(int dayofmonth) {
		cout << "Summa: " << summa(dayofmonth) << endl;

	}

	double summa(int dayofmonth) {
		return first / dayofmonth * second;
	}
};

int main() {

	Para para;
	para.display(31);

	return 0;
}