#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float,class T3=char>
class Deva
{
    public:
    T1 a;
    T2 b;
    T3 c;
    Deva(T1 x, T2 y,T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "the value of a: " << a << endl;
        cout << "the value of b: " << b << endl;
        cout << "the value of c: " << c<< endl;
    }
};
int main()
{
Deva <>d(4,6.7,'D');
d.display();

    return 0;
}