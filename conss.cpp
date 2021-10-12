#include<iostream>
using namespace std;
class deva{
   
    

    public:
    int ab,bc;
  deva(int x,int y)
  {
      ab=x;
      bc=y;
  }
  
void getvalue( void)
{
    cout<<"the value of ab ="<<ab<<endl;
    cout<<"the value of bc ="<<bc<<endl;
    
}
    
};
int main()
{
  deva a(6,7);
  a.getvalue();
return 0;
}