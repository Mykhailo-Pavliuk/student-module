#include <iostream>
using namespace std;

class Student {
private:
	string name;
	string surname;
	int age;
	int course;
public:
	Student(string name, string surname, int age, int course) {
		this->name = name;
		this->surname = surname;
		this->age = age;
		this->course = course;
	}

	string getName(){
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
		cout << "Age: " << age << " years old" << endl;
		cout << "Course: " << course << endl;
	}
};

int main() {
	Student student("Nastya", "Pavliuk", 19, 1);
	student.print();
	
	return 0;
}