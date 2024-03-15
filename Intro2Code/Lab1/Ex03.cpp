// MSSV: 21127328
// Ten: Cao Tuan Kiet
// Ex03: Tinh chu vi, dien tich hinh tron

#include <iostream> 
#include <iomanip> 
using namespace std;

int main()
{
	double R,C,S;
    const double Pi = 3.1415;
	cout << "Nhap ban kinh cua hinh tron R= ";
	cin >> R;
	cout << fixed << setprecision(4); 
	C = 2 * R * Pi;
	S = R * R * Pi; 
	cout << "Chu vi hinh tron bang " << C << endl ;
	cout << "Dien tich hinh tron bang " << S << endl ;
	return 0;

}