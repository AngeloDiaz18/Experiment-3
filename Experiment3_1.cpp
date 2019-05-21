#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
	double sum;
	int numbers[10], max, min;	
	
	for(int i = 0; i < 10; i++)
	
	
	{
		cout << "Enter 10 numbers: " << i + 1 << " : ";
		cin >> numbers[i];
	}
	cout << endl;
	
		max = numbers[0];
	for(int i = 1; i < 10; i++)
	
	{
		
		if(max < numbers[i])
		max = numbers[i];
		
	}

	min = numbers[0];
	for(int i = 1; i < 10; i++)
	
	{
		if(min > numbers[i])
		min = numbers[i];
	}
	
	for(int i = 0; i < 10; i++)
	{
		sum = sum + numbers[i];
	}
	
	cout << "The Largest Integer: " << max << endl;
	cout << "The Smallest Integer " << min << endl;
	cout << "The sum of the numbers is: " << sum << endl;
	cout << "The average of the numbers is: " << sum/10 << endl;
	
	getch();
	return 0;
}
