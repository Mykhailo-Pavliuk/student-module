#include "Student.h"

void Student::setName(string name) {
	if (name.length() < 2) {
		cout << "Invalid name value" << endl;
		this->name = "Unknown";
	}
	else {
		this->name = name;
	}
}

void Student::setSurname(string surname) {
	if (surname.length() < 2) {
		cout << "Invalid surname value" << endl;
		this->surname = "Unknown";
	}
	else {
		this->surname = surname;
	}
}

void Student::setAge(int age) {
	if (age >= 18 && age <= 120) {
		this->age = age;
	}
	else {
		cout << "Invalid age value" << endl;
		this->age = 18;
	}
}

void Student::setCourse(int course) {
	if (course > 0 && course <= 6) {
		this->course = course;
	}
	else {
		cout << "Invalid course value" << endl;
		this->course = 1;
	}
}

Student::Student(string name, string surname, int age, int course) {
	setName(name);
	setSurname(surname);
	setAge(age);
	setCourse(course);
}

Student::Student() {}

string Student::getName() {
	return name;
}

string Student::getSurname() {
	return surname;
}

int Student::getAge() {
	return age;
}

int Student::getCourse() {
	return course;
}

void Student::print() {
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Age: " << age << " years old" << endl;
	cout << "Course: " << course << endl;
	cout << "-----------------" << endl;
}