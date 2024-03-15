// MSSV: 21127328
// Ten: Cao Tuan Kiet
// Ex04: Tinh chu vi va dien tich hinh chu nhat

#include <iostream> 
#include <iomanip> 
using namespace std;

int main()
{
	double dai, rong;
	cout << "Nhap vao chieu dai:";
	cin >> dai;
	cout << "Nhap vao chieu rong:";
	cin >> rong;
	cout << fixed << setprecision(4); 
	cout << "Chu vi hinh chu nhat bang " << (dai + rong) * 2 << endl ;
	cout << "Dien tich cua hinh chu nhat bang " << dai * rong << endl ;
	return 0;
}