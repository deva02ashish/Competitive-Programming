#include<iostream>
using namespace std;
/*
---------------virtual_base_inheritance----------------
 student-->>test
 student-->>sports
 test-->>result
 sports-->>result
*/
class student
{
    protected:
    int roll_no;
    public:
    void set_number(int a)
    {
        roll_no=a;
    }
    void print_number(void)
    {
        cout<<"your roll number is :"<<roll_no<<endl;
    }
};
class test:virtual public student
{
protected:
float maths ,physics;
public:
void set_marks(float m1,float m2)
{
    maths=m1;
    physics=m2;
}
void print_marks(void)
{
    cout<<"you have obtained marks"<<endl
         <<"math: "<<maths<<endl
         <<"physics: "<<physics<<endl;
}
};
class sports:virtual public student{
protected:
float score;
public:
void set_score(float sc)
{
    score=sc;
}
void print_score(void)
{
    cout<<"you PT score is :"<<score<<endl;
}
};
class result:public test,public sports
{
protected:
float total;
public:
void display(void)
{
    total=maths+physics+score;
    print_number();
    print_marks();
    print_score();
    cout<<"your total score is :"<<total<<endl;

}
};
int main()
{
  result deva;
  deva.set_number(7);
  deva.set_marks(83.4,74.7);
  deva.set_score(7);
  deva.display();
return 0;
}