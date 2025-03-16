#include<stdio.h>
#include< ctype.h>

void main() {
	char str[] = "Xin chao moi nguoi";
	int i=0;
	while (str[i] != 0 ) {

	
		if (str[i] >= 97 && str[i] <= 132){
			str[i] = str[i] - 32;
		}
		i++;
	}
	printf("%s", str);
	return 0;
}