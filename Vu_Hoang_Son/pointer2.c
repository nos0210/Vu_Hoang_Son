#include<stdio.h>
#include<math.h>


int trungbinhcong(int* a, int n) {
	int T =0;
	int TBC =0;
	int cout  = 0;
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
		if (a[i] % 2 != 0) {
			T += a[i];
			cout++;
		}
		
	}
	TBC = T / cout;
	
	return TBC;
}

void main() {
	int n = 0;
	int KQ = 0;
	printf("nhap so n:");
	scanf_s("%d", &n);
	int a[1000] = {0};
	printf("nhap gia tri");

	KQ = trungbinhcong(&a, n);
	printf("tbc = %d", KQ);

}