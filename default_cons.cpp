#include<iostream>
using namespace std;
class dhiru{
    public:
    int ad1,ad2;
        dhiru()
        {
            ad1=21;
            ad2=57;
        }
        void printvalue(void)
        {
            cout<<"the value of ad1="<<ad1<<endl;
            cout<<"the value of ad2="<<ad2<<endl;


        }
        dhiru(int x,int y){
            ad1=x;
            ad2=y;
        }
};
int main()
{
    dhiru f(8,9);
        // f.printvalue();

        cout<<"the value ad1 :"<<f.ad1<<endl;
        cout<<"the value ad2 :"<<f.ad2<<endl;
  
return 0;
}