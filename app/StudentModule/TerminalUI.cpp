#include <iostream>
#include "TerminalUI.h"
using namespace std;

TerminalUI::TerminalUI(StudentRepository repository) {
	this->repository = repository;
}

void TerminalUI::run() {
	int command;

	while (true) {
		cout << "--------------------" << endl;
		cout << "1 - " << "Add student" << endl;
		cout << "2 - " << "Print all students" << endl;
		cout << "0 - " << "Exit" << endl;
		cin >> command;
		cout << "--------------------" << endl;

		if (command == 1) {
			string name;
			string surname;
			int age;
			int course;

			cout << "Enter student name: " << endl;
			cin >> name;
			cout << "Enter student surname: " << endl;
			cin >> surname;
			cout << "Enter student age: " << endl;
			cin >> age;
			cout << "Enter course: " << endl;
			cin >> course;

			Student newStudent(name, surname, age, course);
			repository.addStudent(newStudent);
		}
		else if (command == 2) {
			repository.printAllStudents();
		}
		else if (command == 0) {
			break;
		}
		else {
			cout << "Invalid option!" << endl;
		}
	}
}