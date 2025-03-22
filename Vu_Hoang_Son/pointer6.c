#include<stdio.h>
#include<math.h>





void main() {
	int n = 0;
	scanf_s("%d", &n);
	int a[1000];
	int* num = &a;
	for (int i = 0; i < n; i++) {
		scanf_s("%d", num+i);
	}
	
	for (int i = 0; i < n; i++) {
		int m = *(num + i);
		int songuyen = 1;
		if (m < 2) {
			songuyen = 0;
			
		}
		else{
			for (int j = 2; j <= sqrt(m); j++) {
				if (m % j == 0) {
					songuyen = 0;
					break;
				}

			}
		}
		if (songuyen == 1) {
			printf("%d ", m);
		}
		
	}
	
	return 0;	 
}