#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
  map<string ,int> marksmap;
  marksmap["deva"]=88;
  marksmap["ashish"]=76;
  marksmap["dhiru"]=85;
  map<string,int>::iterator itr;
  for (itr=marksmap.begin(); itr!=marksmap.end(); itr++)
  {
      cout<<(*itr).first<<" "<<(*itr).second<<endl;
  }
  
return 0;
}