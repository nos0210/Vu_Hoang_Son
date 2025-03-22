#include<stdio.h>
#include<math.h>
void main() {
	int ar[1000] = { 0 };
	int* ptr =ar;
	int n =0;
	scanf_s("%d", &n);
	int i = 0;
	for (; i < n; i++) {
		scanf_s("%d", &ar[i]);
	

	}
	for (int i = 0; i < n; i++) {
		if (*(ptr+i )% 2 == 0) {
			printf("%d ", *(ptr + i));
			

		}
		
	}
	

}