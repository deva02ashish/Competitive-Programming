

#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;

using namespace boost::multiprecision;
using namespace std;

int main()
{
  long int n;
  cpp_int fact=1;
  cin>>n;
  for(int i=n;i>=1;i--)
  {
      fact=fact*i;
  }
  cout<<fact<<endl;
return 0;
}