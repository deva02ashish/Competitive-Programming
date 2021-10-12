#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cout << "please enter the number N=";
  cin >> N;

  vector<int> v;
  int I = 0;
  int COUNT = 0;
  while (N != 0)
  {
    if (N & (1 << I))
    {
      N = (N & (~(1 << I)));
      COUNT++;
      I++;
     
      cout << "the value of counting is = " << COUNT << endl;
       continue;
    }

    v.push_back(COUNT);
    COUNT = 0;
    I++;
  }
   v.push_back(COUNT);
  cout << "element in array:" << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;
  cout << "max value of the vector :" << *max_element(v.begin(), v.end());

  return 0;
}