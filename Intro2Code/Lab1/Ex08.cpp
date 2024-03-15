// MSSV: 21127328
// Ten: Cao Tuan Kiet
// Ex08: Xuat ra c,d

#include <iostream> 
using namespace std;

int main()
{
	int a, b, c, d; 
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	c = a / b;
	d = a % b; 
	cout << "Phan nguyen cua " << a << " chia cho " << b << " la " << c << endl;
	cout << "Phan du cua " << a << " chia cho " << b << " la " << d << endl;
	return 0;
}