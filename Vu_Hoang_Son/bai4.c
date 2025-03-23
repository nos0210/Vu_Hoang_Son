#include<stdio.h>

void main() {
	char str[] = "Hello its me";
	int i = 0;
	int count = 0;
	while (str[i] != 0) {
		if (str[i] == 32) {
			count++;
		}
		i++;
	}
	printf("%d", count + 1);
}
