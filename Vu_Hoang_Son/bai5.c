#include<stdio.h>

void main() {
	char str[] = "vu hoang son";
	int i = 0;
	str[0]=str[0]-32;
	while (str[i] != 0) {
		
		if (str[i] == 32 && str[i + 1] >= 97 && str[i + 1] <= 122) {
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	printf("%s", str);
}