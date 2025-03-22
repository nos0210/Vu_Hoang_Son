#include<stdio.h>
#include<math.h>

void tangdan(int* a, int n) {
	int tg = 0;
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[i]) {
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}

		}

	}

}

void main() {
	int n = 0;
	scanf_s("%d", &n);
	int a[1000] = { 0 };
	tangdan(a, n);
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}


}