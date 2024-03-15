// MSSV: 21127328
// Ten: Cao Tuan Kiet
// Ex10: Tinh van toc cuoi cung

#include <iostream> 
using namespace std;

int main()
{
	int v, a, t;
	cout << "Nhap van toc ban dau: ";
	cin >> v;
	cout << "Nhap gia toc: ";
	cin >> a;
	cout << "Nhap thoi gian: ";
	cin >> t;
	cout << "Van toc cuoi cung bang " << v + a * t;
	return 0;
}