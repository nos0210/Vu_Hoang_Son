#include<stdio.h>

void main() {
	char str[] = "hello";
	int cout = 0;
	int i = 0;
	while (str[i] != '\0') {
		i++;
		cout++;
	}
	printf("%d", cout);




}