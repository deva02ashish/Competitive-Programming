#include <iostream>
using namespace std;
int factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}
int main()
{
	// your code goes here
	int t;
	cin >> t;
	int long long fact;
	int arr[t];
	for (int i = 0; i < t; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < t; i++)
	{
		fact = factorial(arr[i]);
		cout << fact << endl;
	}
	return 0;
}