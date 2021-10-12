#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void display(vector<int> &v)
{cout<<"element of array : ";
    for (int i = 0; i < v.size(); i++)
    {
    cout<<v[i]<<" ";
    }
    
}
int main()
{
  vector<int > vec;
 
  int ele;
  for (int i = 0; i < 4; i++)
  {
      cout<<"enter element to add to this vector :";
     cin>>ele;
     vec.push_back(ele);
  }
  display(vec);

return 0;
}