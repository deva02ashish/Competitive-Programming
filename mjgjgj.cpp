#include <iostream>
using namespace std;
int get_bit(int a, int pos)
{
    if((a&(1LL<<(pos-1)))) return 1;
    return 0;
}
int main()
{
    int a = 5;
    int pos = 2;
    cout << get_bit(a, pos) << endl;
    return 0;
}