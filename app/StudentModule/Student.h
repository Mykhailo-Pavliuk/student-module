#pragma once
#include <iostream>
using namespace std;

class Student {
private:
	string name;
	string surname;
	int age;
	int course;
	int id;

	int grades[10];
	int gradesCount = 0;
	int Max_grades = 10;

	void setName(string name);
	void setSurname(string surname);
	void setAge(int age);
	void setCourse(int course);

public:
	Student(string name, string surname, int age, int course, int id);
	Student();

	string getName();
	string getSurname();
	int getAge();
	int getCourse();
	int getId();

	void setId(int id);

	void print();

	void addGrade(int grade);
};