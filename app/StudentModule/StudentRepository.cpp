#include "StudentRepository.h"

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

	student.setId(studentId);
	studentId++;

	newStudents[size] = student;
	students = newStudents;
	size++;
}

void StudentRepository::findByName(string name) {
	for (int i = 0;i < size;i++) {
		if (students[i].getName() == name) {
			students[i].print();
			return;
		}
	}

	cout << "Student not found!" << endl;
}

StudentRepository::StudentRepository() {
	students = nullptr;
	size = 0;
	studentId = 1;
}

bool StudentRepository::removeStudentById(int id) {
	for (int i = 0;i < size;i++) {
		if (students[i].getId() == id) {
			Student* newStudents = new Student[size - 1];

			int count = 0;

			for (int j = 0;j < size;j++) {
				if (students[j].getId() != id) {
					newStudents[count] = students[j];
					count++;
				
				}
			}

			students = newStudents;
			size--;
			
			return true;
		}
	}
	return false;
}

void StudentRepository::sortByCourse() {
	for (int i = 0;i < size - 1;i++) {
		for (int j = 0;j < size - 1;j++) {
			if (students[j].getCourse() > students[j + 1].getCourse()) {
				Student temporary = students[j];
				students[j] = students[j + 1];
				students[j + 1] = temporary;
			}
		}
	}
}