#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n1;
    cout << "enter the number : " << endl;
    cin >> n1;
    int temp;
    int sum = 0;
    int intg;
    int n = n1;
    do
    {
        temp = n1 / 10;
        int count = -1;
        do
        {
            intg = n / 10;
            n = intg;
            count++;
        } while (intg != 0);
        // count--;
        cout<<"the valu of count variable : "<<count<<endl;
        float res = pow(10, count);
  cout<<" value of power function : "<<res<<endl;
        int r = n1 % 10;
        sum = sum + r * res;
        cout<<"the value of sum function :"<<sum<<endl;
        n1 = temp;
n=temp;
    } while (temp != 0);
    cout << "the value of reverse number : "<<sum << endl;

    return 0;
}