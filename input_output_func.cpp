#include<iostream>
#include<fstream>
using namespace std;

int main()
{
  // string st="i am deva";
  // ofstream out("sample.txt");
  // out<<st;
  string st;
  ifstream in("sample.txt");
  in>>st;
  getline(in,st);
  getline(in,st);
  cout<<st;
return 0;
}