#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	int GCD = 1,LCM;
	int m1, m2;
	if (n1 > n2)
	{
		for (int i = 2; i <= n1; i++)
		{
			while (n1 % i == 0 && n2 % i == 0)
			{

				GCD = GCD * i;
				m1 = n1 / i;
				n1 = m1;
				m2 = n2 / i;
				n2 = m2;
			}
		}
LCM=GCD*n1*n2;
	}
	// else
	// {
	// 		for (int i = 2; i <= n1; i++)
	// 	{
	// 		while (n1 % i == 0 && n2 % i == 0)
	// 		{

	// 			GCD = GCD * i;
	// 			m1 = n1 / i;
	// 			n1 = m1;
	// 			m2 = n2 / i;
	// 			n2 = m2;
	// 		}
	// 	}
	// 	LCM=GCD*n1*n2;
	// }

	cout << GCD <<" "<<LCM<< endl;
	return 0;
}