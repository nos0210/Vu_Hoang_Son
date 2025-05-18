#include"phanso.h"
#include<stdio.h>

template <class kieu_du_lieu_mau>

kieu_du_lieu_mau cong(kieu_du_lieu_mau a, kieu_du_lieu_mau b) {
	return a + b;
}
template<class kieu_du_lieu_mau>
kieu_du_lieu_mau nhan(kieu_du_lieu_mau a  , kieu_du_lieu_mau b) {
	return a * b;
}

int main() {
	phanso A;
	A.tu = 1;
	A.mau = 2;
	phanso B;
	B.tu = 2;
	B.mau = 3;

	phanso C = A.nhan(B);


	C = A.operator*(B);
	C = A * B;

	int a = 1;
	int b = 2;
	float x = 1.0f;
	float y = 0.2f;
	auto c = cong(a, b);
	auto z = cong(x, y);
	auto y = nhan(x, y);

	phanso D = A.cong(B);
	phanso F = A + B;
	phanso G = A - B;
	phanso H = A / B;
	
	A.sosanh(B);
}