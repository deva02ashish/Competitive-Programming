#include <iostream>
using namespace std;
class employee
{
  int id;
  static int count;

public:
  void setdata(void)
  {
    cout << "please enter the id of employee";
    cin >> id;
    count++;
  }
  void getdata(void)
  {
    cout << "id of employee is : " << id << " this is employee number: " << count << endl;
  }
  static void getcount(void)
  {
    cout << "the value of count is :" << count << endl;
  }
};

int employee::count;

int main()
{
  employee deva, prince, vivek;
  deva.setdata();
  deva.getdata();
employee::getcount();



  prince.setdata();
  prince.getdata();
employee::getcount();
  vivek.setdata();
  vivek.getdata();
  employee::getcount();

  return 0;
}