#include<stdio.h>

void main() {
	char str[] = "HeLLo";
	int cout = 0;
	int i = 0;
	while (str[i] != 0 ) {
	if( str[i] > 65 && str[i] < 92){
		cout++;
	}
		
	i++;
	}
	printf("%d", cout);




}