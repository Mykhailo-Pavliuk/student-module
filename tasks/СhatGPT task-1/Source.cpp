#include <iostream>
using namespace std;

class Cube {
private:
	double lengh;
	double widht;
	double heigh;
	double weight;
	string color;
public:
	Cube() {
		this->lengh = 1;
		this->widht = 1;
		this->heigh = 1;
		this->weight = 1;
		this->color = "Red";
	}

	Cube(double l, double w, double h, double wei, string c) {
		init(l, w, h, wei, c);
	}
	
	void init(double l, double w, double h, double wei, string c) {
		if (l > 0 && l <= 15) {
			this->lengh = l;
		}
		else {
			this->lengh = 1;
		}

		if (w > 0 && w <= 15) {
			this->widht = w;
		}
		else {
			this->widht = 1;
		}

		if (h > 0 && h <= 15) {
			this->heigh = h;
		}
		else {
			this->heigh = 1;
		}

		if (wei > 0 && wei <= 15) {
			this->weight = wei;
		}
		else {
			this->weight = 1;
		}

		if (c == "Yellow" || c == "Blue" || c == "Green" || c == "Pink" || c == "Black") {
			this->color = c;
		}
		else {
			this->color = "Red";
		}
	}

	void read() {
		double l, w, h, wei;
		string c;
	
		cout << "Enter lengh: " << endl;
		cin >> l;

		cout << "Enter widht: " << endl;
		cin >> w;

		cout << "Enter heigh of cube: " << endl;
		cin >> h;

		cout << "Enter weight of cube: " << endl;
		cin >> wei;

		cout << "Enter color of cube: " << endl;
		cin >> c;

		init(l, w, h, wei, c);
	}

	double volume() {
		return lengh * widht * heigh;
	}

	double shstilnist() {
		return weight / volume();
	}

	bool fitsInBox(double boxL, double boxW, double boxH) {
		return (lengh <= boxL &&
			widht <= boxW &&
			heigh <= boxH);
	}

	void display() {
		cout << "\nCube data:\n";
		cout << "Lengh: " << lengh << endl;
		cout << "Widht: " << widht << endl;
		cout << "Heigh: " << heigh << endl;
		cout << "Weight: " << weight << endl;
		cout << "Color: " << color << endl;
		cout << endl;
		cout << "Volume: " << volume() << endl;
		cout << "Density: " << shstilnist() << endl;
	}
};

int main() {
	Cube cube;
	cube.read();
	cube.display();

	if (cube.fitsInBox(10, 10, 10)) {
		cout << "Cube fits in box 10x10x10 ";
	}
	else {
		cout << "Cube does NOT fit in box 10x10x10 ";
	}

	return 0;
}