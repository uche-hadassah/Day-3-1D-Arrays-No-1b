/*b) Modify the program in (a) above so that it reads a sequence of positive numbers 
from the user (-1 to signal end of input) and copies it in another array. The 
program should output the copied array.*/#include<iostream>
using namespace std;
int main()
{
	const int MAX = 100;
	int Original[MAX];
	int Copy[MAX];
	int num;
	int i = 0;
	int Size;
	cout << "Enter positive numbers(-1 to end):";
	
	do
	{
		cin >> num;
			while (num < -1)//Does this as long as num < -1
			{
				cout << "Invalid! Please enter a POSITIVE number:";
				cin >> num;
			}
			if (num == -1)
			{
				break;
			}
			else
			{
				Original[i] = num;//The number is registered in the original array
				Copy[i] = Original[i];//Its equivalent is registered in the copy
			}
			Size = i;
	} while (num != -1);
	cout << "The copied array is:";
	for (int j = 0; j < Size; j++)//Output the copied array
	{
		cout << Copy[j] << " ";
	}
	cout << endl;
	return 0;
}
