#pragma once
class phanso
{
public:
	int tu;
	int mau;
	phanso nhan(phanso khac);

	phanso  operator*(phanso khac);
	/*bool operator >(phanso khac);*/

	phanso cong(phanso khac); 
	phanso operator+(phanso khac);
	phanso operator-(phanso khac);
	phanso operator/(phanso khac);

	int gcd(int a, int b) {
		while (b != 0) {
			int temp = b;
			b = a % b;
			a = temp;
		}
		return a;
	}
	void sosanh(phanso khac);

};

