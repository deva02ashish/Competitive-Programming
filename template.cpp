#include<iostream>
using namespace std;
template<class T>
class vector
{  public:
    T *arr;
    int size;
  
    vector(int m)
    {
      size=m;
      arr=new T[size];
    }
T dotproduct(vector &v)
{
    T d=0;
  
    for (int i = 0; i < size; i++)
    {
        d+=arr[i]*arr[i];
       
    }
     return d;
    
}
};
int main()
{
//   vector v1(3);
//   v1.arr[0]=4;
//   v1.arr[1]=3;
//   v1.arr[2]=1;

//   vector v2(3);
//   v2.arr[0]=4;
//   v2.arr[1]=3;
//   v2.arr[2]=1;
//   int a=v1.dotproduct(v2);
//   cout<<a<<endl;
  vector <float>v1(3);
  v1.arr[0]=4.1;
  v1.arr[1]=3.2;
  v1.arr[2]=1.11;

  vector <float>v2(3);
  v2.arr[0]=4.67;
  v2.arr[1]=3.0;
  v2.arr[2]=1.89;
  float a=v1.dotproduct(v2);
  cout<<a<<endl;
return 0;
}