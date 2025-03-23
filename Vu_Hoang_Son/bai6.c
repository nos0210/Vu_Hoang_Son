#include<stdio.h>
void main() {
	char str[] = "chu chau chat chuoi";
	
	char* prt = str;
	while (*prt != '0') {

		if (*prt == 'c') {
			
			printf("%p ", prt);
		}
		*prt++;

	}

}