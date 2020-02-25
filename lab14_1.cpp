#include <iostream>
#include <string>
using namespace std;


int main(){
	int a = 5;
	string b = "A";
	string &c = b;
	int *x = &a;
	string *y = &b;
	int **z = &x;
	cout << "a = " << a << ", b = " << b << ", c = " << c << ", x = " << x << ", y = " << y << ", z = " << z << "\n";
	cout << "address a = " << &a << "\naddress b = " << &b << "\naddress c = " << &c << "\naddress x = " << &x << "\naddress y = " << &y << "\naddress z = " << &z << "\n-------------------------------------------------------------\n";
	c = "F";
	cout << "a = " << a << ", b = " << b << ", c = " << c << ", x = " << x << ", y = " << y << ", z = " << z << "\n";
	*y = "W";
	cout << "a = " << a << ", b = " << b << ", c = " << c << ", x = " << x << ", y = " << y << ", z = " << z << "\n";
	*x = 6;
	cout << "a = " << a << ", b = " << b << ", c = " << c << ", x = " << x << ", y = " << y << ", z = " << z << "\n";
	**z = 7;
	cout << "a = " << a << ", b = " << b << ", c = " << c << ", x = " << x << ", y = " << y << ", z = " << z << "\n";

	return 0;
}
