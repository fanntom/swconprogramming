#include <iostream>
using namespace std;
int calcGugudan(int a, int b)
{
	return a * b;
}

int main()
{
	int numb;
	cin >> numb;
	cout << numb << " x " << "1 = " << calcGugudan(numb, 1) << "\n" <<  numb << " x " << "2 = " << calcGugudan(numb, 2) << "\n" <<  numb << " x " << "3 = " << calcGugudan(numb, 3) << "\n" <<  numb << " x " << "4 = " << calcGugudan(numb, 4) << "\n" <<  numb << " x " << "5 = " << calcGugudan(numb, 5) << "\n" << numb << " x " << "6 = " << calcGugudan(numb, 6) << "\n" <<  numb << " x " << "7 = " << calcGugudan(numb, 7) << "\n" <<  numb << " x " << "8 = " << calcGugudan(numb, 8) << "\n" <<  numb << " x " << "9 = " << calcGugudan(numb, 9);
}
