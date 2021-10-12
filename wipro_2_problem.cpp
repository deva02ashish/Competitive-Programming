#include<iostream>
using namespace std;
int thousandu_place(int num)
{
    return num=num/1000;

}
int hundred_place(int num)
{
    num=num/100;
    return num%10;
}
int tenth_place(int num)
{
    num/=10;
    return num%10;
}
int unit_place(int num)
{
    return num%10;
}
int greatest_num(int n1,int n2,int n3)
{
    if(n1>n2&&n1>3) return n1;
    else if(n2>n3) return n2;
    else return n3;
}
int smallest_num(int n1,int n2,int n3)
{
    if(n1<n2&&n1<3) return n1;
    else if(n2<n3) return n2;
    else return n3;
}
int main()
{
  int num1,num2,num3;
  cin>>num1>>num2>>num3;
    int th1=thousandu_place(num1);
    int th2=thousandu_place(num2);
    int th3=thousandu_place(num3);

    int h1=hundred_place(num1);
    int h2=hundred_place(num2);
    int h3=hundred_place(num3);

    int te1=tenth_place(num1);
    int te2=tenth_place(num2);
    int te3=tenth_place(num3);

    int u1=unit_place(num1);
    int u2=unit_place(num2);
    int u3=unit_place(num3);
    int key=greatest_num(th1,th2,th3)*1000+smallest_num(h1,h2,h3)*100+greatest_num(te1,te2,te3)*10+smallest_num(u1,u2,u3);
cout<<"the key value is ="<<key<<endl;

return 0;
}