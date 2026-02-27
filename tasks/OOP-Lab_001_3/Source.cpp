#include <iostream>
using namespace std;

class Para {
public:
	int first;
	int second;
public:

	Para() {
		this->first = 1;
		this->second = 1;
	}

	Para(int f,int s) {
		init(f, s);
	}

	void init(int f,int s) {
		if (f > 0)
			this->first = f;
		else
			this->first = 1;

		if (s > 0)
			this->second = s;
		else
			this->second = 1;
	}

	void read() {
		int f;
		int s;

		cout << "Enter your side of triangle: ";
		cin >> f;
		cout << "Enter your hight :";
		cin >> s;
		init(f, s);
	}

	int sq(int x, int y) {
		return 1.0 / 2 * x * y;
	}

	void display() {
		cout << "The area of a triangle: " << sq(first, second) << endl;
	}
}; 

int main() {

	Para para(5, 9);
	cout << para.first << endl;
	para.read();
	cout << para.first << endl;
	para.display();

	return 0;
}

