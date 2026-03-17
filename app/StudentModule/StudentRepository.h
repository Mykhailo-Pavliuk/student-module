#pragma once
#include "Student.h"

class StudentRepository {
private:
	Student* students;
	int size;
public:
	StudentRepository();
	StudentRepository(Student* students, int size);

	void printAllStudents();
	void addStudent(Student student);
};