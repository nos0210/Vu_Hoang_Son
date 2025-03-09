#include<stdio.h>
#include<math.h>
#include"toan.h"

void main() {
	int x = 0;
	int y = 0;
	printf("x =");
	scanf_s("%d", &x);
	printf("y =");
	scanf_s("%d", &y);
	printf("Tong = %d ", Cong(x, y));
	printf("Hieu = %d", Tru(x, y));
	printf("Tich = %d", Nhan(x, y));
	printf("Thuong = %f", Chia(x, y));
	
}