#include <iostream>
using namespace std;

class Student {
private:
	string name;
	string surname;
	int age;
	int course;

	void setName(string name) {
		if (name.length() < 2) {
			cout << "Invalid name value" << endl;
			this->name = "Unknown";
		}
		else {
			this->name = name;
		}
	}

	void setSurname(string surname) {
		if (surname.length() < 2) {
			cout << "Invalid surname value" << endl;
			this->surname = "Unknown";
		}
		else {
			this->surname = surname;
		}
	}

	void setAge(int age) {
		if (age >= 18 && age <= 120) {
			this->age = age;
		}
		else {
			cout << "Invalid age value" << endl;
			this->age = 18;
		}
	}

	void setCourse(int course) {
		if (course > 0 && course <= 6) {
			this->course = course;
		}
		else {
			cout << "Invalid course value" << endl;
			this->course = 1;
		}
	}
public:
	Student(string name, string surname, int age, int course) {
		setName(name);
		setSurname(surname);
		setAge(age);
		setCourse(course);
	}

	string getName() {
		return name;
	}

	string getSurname() {
		return surname;
	}

	int getAge() {
		return age;
	}

	int getCourse() {
		return course;
	}

	void print() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		if (age == 1) {
			cout << "Age: " << age << " year old" << endl;
		}
		else {
			cout << "Age: " << age << " years old" << endl;
		}
		cout << "Course: " << course << endl;
	}
};

int main() {
	Student student("Nastya", "Pavliuk", 19, 1);
	student.print();

	return 0;
}