/*b) Modify the program in (a) above so that it reads a sequence of positive numbers 
from the user (-1 to signal end of input) and copies it in another array. The 
program should output the copied array.*/#include<iostream>
using namespace std;
int main()
{
	int Original[10];
	int Copy[10];
	int num;
	cout << "Enter 10 positive numbers:";
	for (int i = 0; i < 10; i++)
	{
		int num;
		cin >> num;//Receives the numbers from the user
		while (num < 0)//Does tthis as long as num < -1
		{
			cout << "Invalid! Please enter a POSITIVE number:";
			cin >> num;
		}
		Original[i] = num;//The number is registered in the original array
		Copy[i] = Original[i];//Its equivalent is registered in the copy
	}
	cout << "The copied array is:";
	for (int j = 0; j < 10; j++)//Out put the copied array
	{
		cout << Copy[j] << " ";
	}
	cout << endl;
	return 0;
}
