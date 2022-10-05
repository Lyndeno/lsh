#include <stdio.h>
#include <unistd.h>

int main() {
	char *command = "neofetch";
	char *args[3];
	args[0] = NULL;
	args[1] = NULL;
	args[2] = NULL;
	execvp(command, args);
};
