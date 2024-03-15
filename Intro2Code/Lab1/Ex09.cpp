// MSSV: 21127328
// Ten: Cao Tuan Kiet
// Ex09: Tinh trung binh 4 so

#include <iostream> 
using namespace std;

int main()
{
	double a, b, c, d;
	cout << "Nhap so thu nhat: ";
	cin >> a;
	cout << "Nhap so thu hai: ";
	cin >> b;
	cout << "Nhap so thu ba: ";
	cin >> c;
	cout << "Nhap so thu tu: ";
	cin >> d;
	cout << "Trung binh cua 4 so la " << (a + b + c + d) / 4;
	return 0;
}