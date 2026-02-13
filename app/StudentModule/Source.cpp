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

	void ollInf() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Age: " << age << " years old" << endl;
		cout << "Course: " << course << endl;
	}



};

int main() {

	Student inf("Nastya", "Pavliuk", 19, 1);
	inf.ollInf();
	/*cout << " Name of student is: " << inf.getName() << endl;
	cout << " Surname of student is: " << inf.getSurname() << endl;
	cout << " Student age is: " << inf.getAge() << " years old" << endl;
	cout << " The course is: " << inf.getCourse() << endl;*/
	
	return 0;
}