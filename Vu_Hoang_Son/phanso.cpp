#include "phanso.h"
#include<math.h>
#include<stdio.h>

phanso phanso::operator*(phanso khac) {
	phanso ps; 
	ps.tu = tu * khac.tu;
	ps.mau = mau * khac.mau;
	return ps;
}
phanso phanso::nhan(phanso khac) {
	phanso tich;
	tich.tu = tu * khac.tu;
	tich.mau = mau * khac.mau;
	return tich;
}
  
phanso phanso::cong(phanso khac) {
	phanso tong;
	tong.mau = mau*khac.mau;
	tong.tu = mau * khac.tu + tu *khac.mau;
	return tong; 
}
phanso phanso::operator+(phanso khac) {
	phanso tong;
	tong.mau = mau * khac.mau;
	tong.tu = mau * khac.tu + tu * khac.mau;
	return tong;
}
phanso phanso::operator-(phanso khac) {
	phanso hieu;
	hieu.mau = mau * khac.mau;
	hieu.tu = mau * khac.tu - tu * khac.mau;
	return hieu;
}
phanso phanso::operator/(phanso khac) {
	phanso thuong;
	int a = gcd(tu, mau);
	thuong.tu = tu * khac.mau;
	thuong.mau = mau * khac.tu;
	return thuong; 
}
void phanso::sosanh(phanso khac) {
	phanso sosanh1, sosanh2;
	sosanh1.tu = tu * khac.mau;
	sosanh2.tu = khac.tu * mau;
	if (sosanh1.tu == sosanh2.tu){
	printf("Phan so bang nhau\n");
}
	else if (sosanh1.tu > sosanh2.tu) {
		printf("Phan so 1 lon hon phan so 2\n");
	}
	else {
		printf("Phan so 1  phan so 2\n");
	}
}