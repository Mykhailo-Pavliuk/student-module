#include <iostream>
using namespace std;

class Point3D {
private:
	double x, y, z;
public:
	Point3D() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}

	Point3D(double x, double y, double z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void display() {
		cout << "First tochka= " << x << " , Second tochka= " << y << " , Third tochka= " << z << endl;
	}

	friend double distance3D(Point3D p1, Point3D p2);

};
double distance3D(Point3D p1,Point3D p2) {
	return sqrt(
		(p2.x - p1.x) * (p2.x - p1.x) +
		(p2.y - p1.y) * (p2.y - p1.y) +
		(p2.z - p1.z) * (p2.z - p1.z)
	);
}

int main() {
	Point3D p1(2, 6, 8);
	Point3D p2(1, 3, 9);

	p1.display();
	p2.display();

	cout << endl;
	cout << "Vidstan mish tochkami is:" << distance3D(p1, p2);
	cout << endl;
		
	return 0;
}