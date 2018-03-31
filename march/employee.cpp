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
//default
  Employee()
  {
    eno = 0 ;
    name = 'unndefined';
    salary = 0.0;
    workTime.arrivalTime = 0;
    workTime.departureTime = 0;
  }
  //parameterised constructor
  Employee(int num,char *naam,float sal,int arrival,int departure)
  {
    eno = num;
    strcpy(name,naam);
    salary = sal;
    workTime.arrival = arrival;
    workTime.departure = departure;
  }
  //copy constructor
  Employee(Employee &employee)
  {
    eno = employee.eno;
    strcpy(name,employee.name);
    salary = employee.salary;
    workTime.arrival = employee.workTime.arrivalTime;
    workTime.departure = employee.workTime.departureTime;
  }
  ~Employee()
  {
    int i = 0;
    cout<<"destructor called" <<i+1;
  }

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
