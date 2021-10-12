#include <iostream>
using namespace std;
int gcd(int n, int m)
{
    int r;
     if(n>m)
    {
        r = n % m;
        if (r == 0)
        {
            return m;
        }

        else
        {
            n = m;
            m = r;
            gcd(n, m);
        }
    }
   else
    {

        r = m % n;
        if (r == 0)
        {
            return n;
        }

        else
        {
            m = n;
            n = r;
            gcd(n, m);
        }
    }
   
}
int main()
{

    int a, b;
    cout << "please enter the value of a= ";
    cin >> a;
    cout << "please enter the value of b= ";
    cin >> b;
    cout << "the value of gcd is =" << gcd(a, b);

    return 0;
}