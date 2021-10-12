#include <iostream>
using namespace std;
class Y;//forward declaration


class X
{
    int data;
   

public:
    void setValue(int value)
    {
        data = value;
    }
     friend void add(X, Y);
};
class Y
{
    int num;

public:
   
    void setValue(int value)
    {
        num = value;
    }
     friend void add(X, Y);
};
void add(X o1, Y o2)
{
    cout << "summing of the data of class X and Y object gives me: " << o1.data + o2.num << endl;
}
int main()
{
    X a;
    Y b;
    a.setValue(7);
    b.setValue(11);
    add(a, b);
    return 0;
}