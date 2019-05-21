#include <iostream>
#include<conio.h>
#include <cstring>

using namespace std;
int main()
{
	char a[500];
	int x, n;

    cout<<"Please enter characters: ";
    cin.getline(a,500);
    x=strlen(a);
    
	for ( n = x; n >= 0; n--)

	cout << a[n];
    cout << endl;
	cout <<"SIZE OF ARRAY:" << x++ << endl;

    _getch();
    return 0;
}

