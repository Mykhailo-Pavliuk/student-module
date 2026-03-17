#include <iostream>
#include "StudentRepository.h"
using namespace std;

StudentRepository::StudentRepository() {
	this->students = {};
	size = 0;
}

StudentRepository::StudentRepository(Student* students, int size) {
	this->students = students;
	this->size = size;
}

void StudentRepository::printAllStudents() {
	cout << "\n===== STUDENTS LIST =====\n" << endl;

	if (size == 0) {
		cout << "No students found." << endl;
		return;
	}

	for (int i = 0; i < size; i++) {
		cout << i + 1 << ".";
		students[i].print();
	}
}

void StudentRepository::addStudent(Student student) {
	Student* newStudents = new Student[size + 1];
	for (int i = 0; i < size; i++) {
		newStudents[i] = students[i];
	}
	newStudents[size] = student;
	students = newStudents;
	size++;
}