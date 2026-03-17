#pragma once
#include "StudentRepository.h"

class TerminalUI {
private:
	StudentRepository repository;
public:
	TerminalUI(StudentRepository repository);
	void run();
};