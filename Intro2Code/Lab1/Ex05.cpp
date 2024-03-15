// MSSV: 21127328
// Ten: Cao Tuan Kiet
// Ex05 : Doi do F sang do C

#include <iostream> 
using namespace std;

int main()
{
	double f;
	cout << "Nhap vao nhiet do F can doi sang do C: ";
	cin >> f;
	cout << f<<" do F = " << (f - 32) * 5 / 9 << " do C";
	return 0;

}