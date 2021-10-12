#include <iostream>
using namespace std;
class bankDeposite
{
    int princpal;
    int year;
    float interestrate;
    float returnvalue;

public:
    bankDeposite(){};
    bankDeposite(int p, int y, float r);
    bankDeposite(int p, int y, int r);
    void show();
};
bankDeposite::bankDeposite(int p, int y, float r)
{
    princpal = p;
    year = y;
    interestrate = r;
    returnvalue = princpal;
    for (int i = 0; i < year; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
bankDeposite::bankDeposite(int p, int y, int r)
{
    princpal = p;
    year = y;
    interestrate = float(r) / 100;
    returnvalue = princpal;
    for (int i = 0; i < year; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
void bankDeposite ::show()
{
    cout << "the princepal value was: " << princpal << endl
         << "return value of year :" << year << endl
         << "is: " << returnvalue << endl;
}
int main()
{
    bankDeposite bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    // cout << "enter the value of princepal: " << endl;
    // cin >> p;
    // cout << "enter the year:" << endl;
    // cin >> y;
    // cout << "enter the interest rate in percentage:" << endl;
    // cin >> R;
    // cout << "enter the interest rate in fraction:" << endl;
    // cin >> r;
    cin>>p>>y>>r;

    bd1 = bankDeposite(p, y, r);
    bd1.show();
    cin>>p>>y>>R;
    bd2 = bankDeposite(p, y, R);
    bd2.show();
    return 0;
}