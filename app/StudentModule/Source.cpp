#include "StudentRepository.h"
#include "TerminalUI.h"

int main() {
	StudentRepository repository = StudentRepository();
	TerminalUI ui = TerminalUI(repository);
	ui.run();

	return 0;
}