#include <iostream>
using namespace std;

class Para {
private:
	int first;
	int second;
public:
	Para() {
		this->first = 1;
		this->second = 1;
	}

	Para(int f, int s) {
		init(f, s);
	}
	
	void init(int f, int s) {
		if (f > 0) {
		this->first = f;
	}
		else {
			first = 1;
		}

		if (s > 0) {
			this->second = s;
		}
		else {
			second = 1;
		}
	}

	void read() {
		int  f;
		int  s;

		cout << "Enter hours: " << endl;
		cin >> f;
		cout << "Enter minutes : " << endl;
		cin >> s;

		init(f, s);
	}

	int sec() {
		return (first * 3600) + (second * 60);
	}

	void display() {
		cout << "Total seconds: " << sec() << endl;
	}
};

int main() {
	Para para;
	para.read();
	para.display();

	return 0;
}