#include<bits/stdc++.h>

using namespace std;

class student
{
    public:
            int a,b;
        void display()
        {
            cout<<"value of a is="<<a<<endl;
            cout<<"value of b is="<<b<<endl;
        }
};
int main()
{
  student s;
  s.a=5;
  s.b=6;
  s.display();
cout<<s.a<<endl<<s.b;
return 0;
}