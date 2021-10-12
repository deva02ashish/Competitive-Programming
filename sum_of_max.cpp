#include <iostream>
using namespace std;

int main()
{

    int arr[8] = {1, 3, 5, 7, 9, 13, 11, 15};
    int sum;
    int n=1;
    for (int i = 0; i <= 5; i++)
    {
        for (int k = i + 1; k <= 6; k++)
        {
            for (int j = k+1; j <= 7; j++)
            {
                sum = arr[i] + arr[k] + arr[j];

                cout << n << "."<< "sum of the " << arr[i] << "," << arr[k] << " and " << arr[j] << "=" << sum << endl;
                n=n+1;
                if (sum == 30)
                {
                    cout << "yes ,sum of three number is 30" << endl;
                }
            }
        }
    }

    return 0;
}