#include <iostream>
using namespace std;

class Vector {
private:
	int n_x, n_y, n_z;
public:
	Vector() {
		this->n_x = 1;
		this->n_y = 1;
		this->n_z = 1;
	}

	Vector(int x, int y, int z) {
		n_x = x;
		n_y = y;
		n_z = z;
	}

	void display() {
		cout << "Vector 1: " << n_x << endl << "Vector 2: " << n_y << endl << "Vector 3: " << n_z << endl;
	}

	friend int dotProduct(Vector vector1, Vector vector2);
	friend void crossProduct(Vector vector1, Vector vector2);

};

int dotProduct(Vector vector1, Vector vector2) {
	int result = vector1.n_x * vector2.n_x + vector1.n_y * vector2.n_y + vector1.n_z * vector2.n_z;

	cout << "Dot product: " << result << endl;
	return result;
}

void crossProduct(Vector vector1, Vector vector2) {
	int x = vector1.n_y * vector2.n_z - vector1.n_z * vector2.n_y;
	int y = vector1.n_z * vector2.n_x - vector1.n_x * vector2.n_z;
	int z = vector1.n_x * vector2.n_y - vector1.n_y * vector2.n_x;

	cout << "Cross product: " << x << " " << y << " " << z << endl;
}


int main() {
	Vector v1;
	Vector v2;

	v1.display();
	v2.display();

	dotProduct(v1, v2);
	crossProduct(v1, v2);
	
	return 0;
}