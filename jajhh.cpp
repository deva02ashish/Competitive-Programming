#include<iostream>
using namespace std;

int main()
{
  string str="44487";
  int l=str.length();
  cout<<"lenth of the string"<<l<<endl;
  int count=0;
  for (int i = 0; i < l; i++)
  {
      if (str[i]=='4')
      {
          count++;
      }
      
  }
  cout<<count<<endl;
  
return 0;
}