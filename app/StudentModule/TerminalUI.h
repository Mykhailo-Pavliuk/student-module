#pragma once
#include <iostream>
#include "StudentRepository.h"
using namespace std;

class TerminalUI {
private:
	StudentRepository repository;

public:
	TerminalUI(StudentRepository repository);
	void run();
};