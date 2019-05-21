#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int ProvinceA[7], ProvinceB[7], ProvinceC[7], a, b, c, D, A, Y;
	
	cout<< "Please enter the temperature of Province A, B and C in a week " << endl;
	for (D=0;D<7;D++)
	{
		cout << "Province A, Day " <<D+1 << " : ";
		cin >> ProvinceA[D];
	}
	for (A=0;A<7;A++)
	{
		cout << "Province B, Day " << A+1 << " : ";
		cin >> ProvinceB[A];
	}
	for (Y=0;Y<7;Y++)
	{
		cout << "Province C, Day " << Y+1 << " 3: ";
		cin >> ProvinceC[Y];
	}
	
	cout << endl;
	cout << "\Province A, B and C Temperatures:\n"<< endl;
	for (D=0; D<7; D++)
	{
	cout <<"Province A, Day " <<D+1 << " : " << ProvinceA[D] << endl;
	}
	for (A=0; A<7; A++)
	{
	cout << "Province B, Day " <<A+1 << " : " << ProvinceB[A] << endl;
	}
	for (Y=0; Y<7; Y++)
	{
	cout << "Province C, Day " <<Y+1 << " : " << ProvinceC[Y] << endl;
	}
	
	
	getch();
	return 0;
}
