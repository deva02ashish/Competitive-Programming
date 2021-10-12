#include <iostream>
using namespace std;
int get_bit(int a, int pos)
{
    if ((a&(1<<(pos-1)))!=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    int a = 9;
    int pos =4;
    cout << get_bit(a, pos) << endl;
    return 0;
}