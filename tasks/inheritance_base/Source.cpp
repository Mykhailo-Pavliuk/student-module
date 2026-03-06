#include <iostream>
using namespace std;

class Human {
private:
	string name;
	int age;
	double weight;
public:

	Human() {
		this->name = "Nastya";
		this->age = 18;
		this->weight = 56;
	}

	~Human() {
		cout << "Vu vuklukalu dustryktor!";
	}

	void set (string n, int a, double w) {
		name = n;
		age = a;
		weight = w;
	}

	void print() {
		cout << "Information: " << endl;
		cout << "Name: " << name << endl << "Age: " << age << endl << "Weight: " << weight << endl;
	}
};

	class Adult:public Human {
	private:
		int id;
	public:
		Adult() {
			this->id = 0111;
		}

		Adult(int i) {
			id = i;
		}

		void show() {
			cout << "ID = " << id << endl;
		}
	};

int main() {
	Adult adult(24568);
	adult.set("Bodia", 17, 70);
	adult.print();
	adult.show();
	

	return 0;
}