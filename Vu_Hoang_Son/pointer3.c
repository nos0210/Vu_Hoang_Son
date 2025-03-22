#include<stdio.h>
#include<math.h>

int GTLN(int* a, int n) {
	int max = 0;
	int vt = 0;
	printf("nhap gia tri: ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d",& a[i]);
		if (max < a[i]) {
			max = a[i];
			vt = i;
		}
	}
	return vt;
}

void main() {
	int ln = 0;
	int a[1000];
	int n = 0;
	scanf_s("%d", &n);
	ln = GTLN(a, n);
	printf("GTLN = %d", ln);
}