#include <stdio.h>
#include <stdlib.h>

void callA() {
	printf("Hello!\n");
	return;
}

void callB() {
	printf("I'm B!\n");
	return;
}

void callC() {
	printf("I'm C!\n");
	return;
}

int main (int argc, char **argv) {

	callA();
	callB();
	callC();

 	return 0 ;
}
