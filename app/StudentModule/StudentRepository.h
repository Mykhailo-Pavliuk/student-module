#pragma once
#include <iostream>
#include "Student.h"
using namespace std;

class StudentRepository {
private:
	Student* students;
	int size;
	int studentId;

public:
	StudentRepository();
	StudentRepository(Student* students, int size);

	void printAllStudents();
	void addStudent(Student student);

	void findByName(string name);
};