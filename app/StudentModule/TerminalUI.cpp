#include "TerminalUI.h"

TerminalUI::TerminalUI(StudentRepository repository) {
	this->repository = repository;
}

void TerminalUI::run() {
	int command;

	while (true) {
		cout << "--------------------" << endl;
		cout << "1 - " << "Add student" << endl;
		cout << "2 - " << "Print all students" << endl;
		cout << "3 - " << "Find student by name" << endl;
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

			Student newStudent(name, surname, age, course, 0);
			repository.addStudent(newStudent);
		}
		else if (command == 2) {
			repository.printAllStudents();
		}
		else if (command = 3) {
			string name;
			cout << "Enter name: " << endl;
			cin >> name;

			repository.findByName(name);
		}
		else if (command == 0) {
			break;
		}
		else {
			cout << "Invalid option!" << endl;
		}
	}
}