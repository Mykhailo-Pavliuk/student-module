#include <iostream>
using namespace std;

class Car {
private:
	string brand;
	int year;
	double price;
public:
	Car() {
		this->brand = "Unknown";
		this->year = 2000;
		this->price = 0.0;
	}

	Car(string brand, int year, double price) {
		this->brand = brand;
		this->year = year;
		this->price = price;
	}

	void display() {
		cout << "Brand: " << brand << endl;
		cout << "Year: " << year << endl;
		cout << "Price: " << price << endl;
	}

	void discount(double percent) {
		price = price - price * percent / 100;
	}

	int getAge(int currentYear) {
		return  currentYear - year;
	}

	friend void comparePrice(const Car& car1, const Car& car2);
	friend void olderCar(const Car& car1, const Car& car2);
};

void comparePrice(const Car& car1, const Car& car2) {
	if (car1.price > car2.price) {
		cout << "First car is more expensive" << endl;
	}
	else if (car2.price > car1.price) {
		cout << "Second car is more expensive" << endl;
	}
	else {
		cout << "Cars have same price" << endl;
	}
}

void olderCar(const Car& car1, const Car& car2) {
	if (car1.year < car2.year) {
		cout << "First car is older" << endl;
	}
	else if (car2.year < car1.year) {
		cout << "Second car is older" << endl;
	}
	else {
		cout << "Cars have same age" << endl;
	}
}

int main() {
	Car car1("Toyota", 2007, 20000);
	Car car2("BMW", 2010, 25000);

	comparePrice(car1, car2);
	olderCar(car1, car2);

	return 0;
}