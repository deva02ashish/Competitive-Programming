#include<iostream>
using namespace std;
int count=0;
class num
{
    public:
    num()
    {
        count++;
        cout<<"this is a time when constructor is called for object number"<<count<<endl;
    }
    ~num()
    {
        cout<<"this is time when destructor is called for object number"<<count<<endl;
        count--;
    }
};
int main()
{
  cout<<"we are inside our main function"<<endl;
  cout<<"creating first object n1"<<endl;
  num n1;
  {
      cout<<"entering this block"<<endl;
      cout<<"creating two more object"<<endl;
      num n2,n3;
      cout<<"exting this block"<<endl;
  }
  cout<<"back to main"<<endl;
return 0;
}