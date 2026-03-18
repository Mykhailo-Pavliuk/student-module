#include <iostream>
using namespace std;

class Money {
private:
	int first;
	int second;

	void setFirst(int first) {
		int nominal[] = { 1, 2, 5, 10, 50, 100, 500, 1000, 5000 };
		for (int i = 0;i < 9;i++) {
			if (nominal[i] == first) {
				this->first = first;
				return;
			}
		}
		cout << "This is invalid,setting first to 1. " << endl;
		this->first = 1;
	}

	void setSecond(int second) {
		if (second > 0) {
			this->second = second;
		}
		else {
			cout << "This is invalid,setting second to 1. " << endl;
			this->second = 1;
		}
	}

public:
	Money(int first, int second) {
		setFirst(first);
		setSecond(second);
	}

	int summa() {
		return second * first;
	}
};

int main() {

	Money money(-1, 3);
	cout << money.summa() << endl;

	return 0;
}