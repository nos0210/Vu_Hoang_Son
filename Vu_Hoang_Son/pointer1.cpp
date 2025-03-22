#include<stdio.h>
#include<math.h>
void main() {
	int ar[1000] = {0};
	int* ptr = ar;
	int n=0;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &ar[i]);
		*ptr += ar[i];



	}
	printf("%d", *ptr);
}