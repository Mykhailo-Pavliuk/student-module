#include <iostream>
using namespace std;

class Date {
private:
	int day;
	int month;
	int year;
public:
	Date() {
		day = 1;
		month = 1;
		year = 2000;
	}

	Date(int d, int m, int y) {
		day = d;
		month = m;
		year = y;
	}

	void display() {
		cout << "Date: " << day << "." << month << "." << year << endl;
	}

	friend void isLeapYear(const Date& d);
};

void isLeapYear(const Date& d) {
	if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0)) {
		cout << d.year << " is a leap year" << endl;
	}
	else {
		cout << d.year << " is NOT a leap year" << endl;
	}
}

int main() {
	Date date1;  
	Date date2(29, 2, 2024);  

	date1.display();
	isLeapYear(date1);

	date2.display();
	isLeapYear(date2);

	return 0;
}