/*Name: Uche Hadassah
This program reads a sequence of positive numbers from the user, copies it into another array and ouputs the copied array*/#include<iostream>
using namespace std;
int main()
{
	const int MAX = 100;
	int Original[MAX];
	int Copy[MAX];
	int num;
	int i = 0;
	cout << "Enter positive numbers(-1 to end):";
	do
	{
		cin >> num;
			while (num < -1)//Does this as long as num < -1
			{
				cout << "Invalid! Please enter a POSITIVE number:";
				cin >> num;
			}
			if (num == -1)//Activates the sentinel value
			{
				break;
			}
			else
			{
				Original[i] = num;//The number is registered in the original array
				Copy[i] = Original[i];//Its equivalent is registered in the copy
				i++;//increments i so i can use it when outputting th ecopied array
			}
	} while (i < MAX);
	cout << "The copied array is:";
	for (int j = 0; j < i; j++)//Output the copied array
	{
		cout << Copy[j] << " ";
	}
	cout << endl;
	return 0;
}
