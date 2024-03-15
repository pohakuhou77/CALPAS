// MSSV: 21127328
// Ten: Cao Tuan Kiet
// Ex07 : Tim do dai canh huyen

#include <iostream> 
#include <cmath>
using namespace std;

int main()
{
	double a, b;
	cout << "Nhap canh goc vuong thu nhat: ";
	cin >> a;
	cout << "Nhap canh goc vuong thu hai: ";
	cin >> b;
	cout << "Do dai canh huyen bang " << sqrt( a*a + b*b) ;
	return 0;
}