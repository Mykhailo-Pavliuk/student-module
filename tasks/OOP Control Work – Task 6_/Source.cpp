#include <iostream>
using namespace std;

class paralelepiped {
private:
	double a;
	double b;
	double h;
public:
	paralelepiped(double a, double b, double h) {
		this->a = a;
		this->b = b;
		this->h = h;
	}

	paralelepiped(double a, double h) {
		this->a = a;
		this->b = a;
		this->h = h;
	}

	paralelepiped(double a) {
		this->a = a;
		this->b = a;
		this->h = a;
	}

	friend void volume(paralelepiped p);
	friend void ploshcha(paralelepiped p);
};

void volume(paralelepiped p) {
	double V;
	V = p.a * p.b * p.h;

	cout << "Volume = " << V << endl;
}

void ploshcha(paralelepiped p) {
	double S;
	S = 2 * (p.a * p.b + p.a * p.h + p.b * p.h);

	cout << "Poverxnia = " << S << endl;
}

int main() {

	paralelepiped p1(2, 3, 4);
	paralelepiped p2(5, 6);
	paralelepiped p3(3);

	volume(p1);
	ploshcha(p1);

	cout << endl;

	volume(p2);
	ploshcha(p2);

	cout << endl;

	volume(p3);
	ploshcha(p3);

	return 0;
}