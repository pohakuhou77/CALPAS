// MSSV: 21127328
// Ten: Cao Tuan Kiet
// Ex02: In bieu thuc 

#include <iostream> 
#include <iomanip> 
using namespace std; 

int main()
{
	int a = 5, b = 7;
	double c = 3.7, d = 8;
	cout << fixed << setprecision(1); 
	cout << a << "+" << b << "= " << a + b << endl ;
	cout << c << "+" << d << "= " << c + d << endl ;
	cout << a << "+" << d << "= " << a + d << endl;
	cout << a << "-" << b << "= " << a - b << endl;
	cout << c << "-" << d << "= " << c - d << endl;
	cout << a << "-" << d << "= " << a - d << endl;
	cout << a << "*" << b << "= " << a * b << endl;
	cout << c << "*" << d << "= " << c * d << endl;
	cout << a << "*" << d << "= " << a * d << endl;
	cout << a << "/" << b << "= " << a / b << endl;
	cout << c << "/" << d << "= " << c / d << endl;
	cout << a << "/" << d << "= " << a / d << endl;
	return 0; 
}