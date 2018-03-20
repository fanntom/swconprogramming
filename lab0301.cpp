#include <iostream>
using namespace std;

int sum(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mult(int x, int y)
{
	return x * y;
}
int divi(int x, int y)
{
	return x / y;
}

int main()
{
	int num1;
	int num2;
	cin >> num1;
	cin >> num2;
	cout << "summation = " << sum(num1,num2) << ", subtraction = " << sub(num1,num2) << ", multiplication = " << mult(num1,num2) << ", division = " << divi(num1,num2);
}
