#include<stdio.h>

int GTLN(int* ar, int n) {
	int max = ar[0];
	for (int i = 1; i < n; i++) {
		if (ar[i] > max) {
			max = ar[i];
		}
	}
	return max;
}
void main() {
	int n = 0;
	scanf_s("%d", &n);
	int ar[100];

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &ar[i]);
	}
	printf("Gia tri lon nhat la: %d", GTLN(ar, n));
 }