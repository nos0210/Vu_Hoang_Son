#include<stdio.h>
#include<string.h>
void main() {
	char* str = "Hello, world";
	char* substr = "world";
	char* r = strstr(str, substr);

	if (r != NULL) {
		printf("chuoi con %s duoc tim thay tai vi tri %ld\n", substr, r - str);

	}
	else {
		printf("khong tim thay");
	}
}