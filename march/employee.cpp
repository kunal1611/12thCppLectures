#include <iostream>
#include <stdio.h>

using namespace std;

struct Time
{
  int arrivalTime;
  int departureTime;
};

class Employee
{
private:
  int eno;
  char name[20];
  float salary;
  Time workTime;

public:
  void get_details();
  void show_details();
};

void Employee::get_details()
{
  cout << "Enter employee number : "; cin >> eno;
  cin.ignore();
  cout << "Enter name : "; gets(name);
  cout << "Enter salary : "; cin >> salary;
  cout << "Enter arrival time and departure time : ";
  cin >> workTime.arrivalTime >> workTime.departureTime;
}

void Employee::show_details()
{
  cout << "---------------------------------------------------------------" << endl;
  cout << "Employee number : " << eno << endl;
  cout << "Employee name : " << name << endl;
  cout << "Salary : " << salary << endl;
  cout << "Work time : " << workTime.arrivalTime << " - " << workTime.departureTime << endl;
  cout << "---------------------------------------------------------------" << endl;
}

void promotedemployee(employee *em,int size)
{
  for(int i = 0;i < size;i++)
  {
   if(em.slaray < 100000 && (em[i].departureTime - em[i].arrivalTime) > 7)
    {
      em[i].show_details();
    }
  }

}

int main()
{


  return 0;
}
