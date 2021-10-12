#include<iostream>
using namespace std;

// float average(int a,int b)
// {
//     return (a+b)/2.0;
// }
template <class t1,class t2>
float average(t1 a,t2 b)
{
    return (a+b)/2.0;
}

int main()
{

float avg=average(5,6);
cout<<"the average value of given number: "<<avg<<endl;
return 0;
}