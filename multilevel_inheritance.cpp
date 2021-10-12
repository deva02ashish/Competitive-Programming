#include<iostream>
using namespace std;
class student
{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student::set_roll_number(int r)
{
    roll_number=r;
}
void student::get_roll_number()
{
    cout<<"roll number of student: "<<roll_number<<endl;
}
class exam:public student
{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks();
};
void exam::set_marks(float f1,float f2)
{
    maths=f1;
    physics=f2;

}
void exam::get_marks()
{
    cout<<"marks of maths is: "<<maths<<endl;
    cout<<"marks of physics is: "<<physics<<endl;
}
class result:public exam
{
    float percantage;
    public:
    void display()
    {get_roll_number();
    get_marks();
        cout<<"the percantage is : "<<(maths+physics)/2<<"%"<<endl;
    }
};
int main()
{
  result deva;
  deva.set_roll_number(7);
  deva.set_marks(98,93);
  deva.display();
return 0;
}