#include <iostream>
using namespace std;

class Konus {
private:
	double height;
	double radius;
public:
	Konus() {
		this->height = 1;
		this->radius = 1;
	}
	Konus(double height, double radius) {
		this->height = height;
		this->radius = radius;
	}

	friend void volume(Konus k);
	friend void ploshcha(Konus k);
	friend void nkonusiv(Konus k, int n);
};

void volume(Konus k) {
	double v;
	v = 1.0 / 3.0 * 3.1415 * pow(k.radius, 2) * k.height;
	cout << "Volume = " << v << endl;
}

void ploshcha(Konus k) {
	double l;
	l = sqrt(pow(k.radius, 2) + pow(k.height, 2));

	double S;
	S = 3.1415 * k.radius * (k.radius + l);
	cout << "Ploshcha = " << S << endl;
}

void nkonusiv(Konus k, int n) {
	double l;
	l = sqrt(pow(k.radius, 2) + pow(k.height, 2));

	double S;
	S = 3.1415 * k.radius * (k.radius + l);

	double S_total;
	S_total = n * S;

	cout << "Ploshcha " << n << " konusiv = " << S_total << endl;
}

int main() {
	Konus k1;
	cout << "Konus with default valus: " << endl;
	volume(k1);
	ploshcha(k1);
	nkonusiv(k1, 2);

	cout << endl;
	Konus k2(5, 6);
	cout << "Konus with given valus: " << endl;
	volume(k2);
	ploshcha(k2);
	nkonusiv(k2, 9);

	return 0;
}