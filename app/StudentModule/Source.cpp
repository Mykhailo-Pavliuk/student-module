#include <iostream>
using namespace std;

class Student {
private:
	string name;
	string surname;
	int age;
	int course;

	void setName(string name) {
		if (name.length() < 2) {
			cout << "Invalid name value" << endl;
			this->name = "Unknown";
		}
		else {
			this->name = name;
		}
	}

	void setSurname(string surname) {
		if (surname.length() < 2) {
			cout << "Invalid surname value" << endl;
			this->surname = "Unknown";
		}
		else {
			this->surname = surname;
		}
	}

	void setAge(int age) {
		if (age >= 18 && age <= 120) {
			this->age = age;
		}
		else {
			cout << "Invalid age value" << endl;
			this->age = 18;
		}
	}

	void setCourse(int course) {
		if (course > 0 && course <= 6) {
			this->course = course;
		}
		else {
			cout << "Invalid course value" << endl;
			this->course = 1;
		}
	}
public:
	Student(string name, string surname, int age, int course) {
		setName(name);
		setSurname(surname);
		setAge(age);
		setCourse(course);
	}

	Student() {}

	string getName() {
		return name;
	}

	string getSurname() {
		return surname;
	}

	int getAge() {
		return age;
	}

	int getCourse() {
		return course;
	}

	void print() {
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Age: " << age << " years old" << endl;
		cout << "Course: " << course << endl;
		cout << "-----------------" << endl;
	}
};

class StudentRepository {
private:
	Student* students;
	int size;
public:
	StudentRepository(Student* students, int size) {
		this->students = students;
		this->size = size;
	};
	
	void printAllStudents() {
		cout << "\n===== STUDENTS LIST =====\n" << endl;

		if (size == 0) {
			cout << "No students found." << endl;
			return;
		}

		for (int i = 0;i < size;i++) {
			cout << i + 1 << ".";
			students[i].print();
		}
	}

	void addStudent(Student student) {
		Student* newStudents = new Student[size + 1];
		for (int i = 0;i < size;i++) {
			newStudents[i] = students[i];
		}
		newStudents[size] = student;
		students = newStudents;
		size++;
	}
};

int main() {

	Student students[4]{
		Student("Nastya", "Pavliuk", 19, 1),
		Student("Mishka", "Pavliuk", 24, 5),
		Student("Oleg", "Lukianov", 25, 5),
		Student("Vitalina", "Lukianova", 18, 1)
	};

	StudentRepository repository(students, 4);
	repository.printAllStudents();
	repository.addStudent(Student("Liza", "Tumoshko", 17, 5));
	repository.printAllStudents();

	int command;
	while (true) {
		cout << "--------------------" << endl;
		cout << "1 - " << "Add student" << endl;
		cout << "2 - " << "Print all students" << endl;
		cout << "0 - " << "Exit" << endl;
		cin >> command;
		cout << "--------------------" << endl;

		if (command == 1) {
			repository.addStudent(Student("Bodia", "Laushkin", 18, 1));
			cout << "Student added!" << endl;
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
	return 0;
}
