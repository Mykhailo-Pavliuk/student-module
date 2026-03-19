#pragma once
#include <iostream>
using namespace std;

class Student {
private:
	string name;
	string surname;
	int age;
	int course;

	void setName(string name);
	void setSurname(string surname);
	void setAge(int age);
	void setCourse(int course);

public:
	Student(string name, string surname, int age, int course);
	Student();

	string getName();
	string getSurname();
	int getAge();
	int getCourse();

	void print();
};