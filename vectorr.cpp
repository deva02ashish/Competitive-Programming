#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v)

{
    cout<<"display this vector:"<<endl;
for (int i = 0; i < v.size(); i++)
{
  cout<<v[i]<<" ";

}
  cout<<endl;  
}
int main()
{
  vector<int>vec1;//zero length integer vector
//    int element;
//   int size=5;
//   cout<<"enter the size of array : "<<endl;
//   cin>>size;
//   for (int i = 0; i < size; i++)
//   {
//       cout<<"first element of array : ";
//       cin>>element;
//       vec1.push_back(element);
//   }
// //   vec1.pop_back();
//   display(vec1);
//   vector<int>::iterator iter=vec1.begin();
//   vec1.insert(iter+2,10,551);
//   display(vec1);
  

  vector<char>vec2(4);//four length integer vector
  vec2.push_back('D');
//   display(vec2);
   vector<char>vec3(vec2);//four length integer vector from vec2
//    display(vec3);
vector<int>v(6,3);//6-element vector of 3s
display(v);


 
return 0;
}