#include <iostream>

using namespace std;

int main()
{
	float fah;
	cout << "Enter a Fahrenheit temperature: ";
	cin >> fah;
	cout << fah << " Fahrenheit is " << (fah - 32) / 1.8 << " in Celsius";
}
