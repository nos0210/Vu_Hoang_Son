#include<stdio.h>
#include<math.h>

int thaythe(int* a, int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			a[i] = 0;

		}
		printf(" %d", a[i]);

	}

}
	


void main() {
	int n=0;
	scanf_s("%d", &n);
	int a[1000];
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);

		
	}
	thaythe(a, n);
}