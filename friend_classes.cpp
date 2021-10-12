#include <iostream>
using namespace std;
class complex; //forward declaration
class calculator
{
public:
    int sumoftwo(int a, int b)
    {
        return a + b;
    }
    int sumofrealpart(complex, complex);
};
class complex
{
    int a;
    int b;
    friend int calculator :: sumofrealpart(complex, complex);

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printcomplexNumber()
    {
        cout << "the complex number is:" << a << "+" << b << "i" << endl;
    }
};

int calculator::sumofrealpart(complex o1, complex o2)
{
    return (o1.a + o2.a);
    cout << "u r in" << endl;
}

int main()
{
    complex o1, o2;
    o1.setnumber(7, 11);
    // c1.printcomplexNumber();
    o1.setnumber(10, 18);
    // c1.printcomplexNumber();
    calculator cal;
    int resc = cal.sumofrealpart(o1, o2);
    cout << "sum of the real part of complex number: " << resc << endl;

    return 0;
}