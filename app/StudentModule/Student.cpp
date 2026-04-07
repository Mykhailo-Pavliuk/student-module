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

Student::Student(string name, string surname, int age, int course, int id) {
	setName(name);
	setSurname(surname);
	setAge(age);
	setCourse(course);
	this->id = id;
	this->gradesCount = 0;
}

Student::Student() {
	this->gradesCount = 0;
}

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

void Student::setId(int id) {
	this->id = id;
}

int Student::getId() {
	return id;
}

void Student::print() {
	cout << "Id: " << id << endl;
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Age: " << age << " years old" << endl;
	cout << "Course: " << course << endl;
	cout << "-----------------" << endl;
}

void Student::addGrade(int grade) {
	if (grade < 0 || grade > 100) {
		cout << "Invalid grade value" << endl;
		return;
	}
	if (gradesCount >= Max_grades) {
		cout << "Maximum number of grades reached" << endl;
		return;
	}

	grades[gradesCount] = grade;
	gradesCount++;
}