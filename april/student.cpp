#include <iostream>

using namespace std;

class School
{
protected:
  char name[20];
  int age;
  char address[50];

public:
  //home assignment
  void get_common_data();
  void show_common_data();
};

class Student : public School
{
  // int standard;
  int roll_number;

public:
   void get_details();
   void show_details();
};

class faculty : public School
{

public:
  char subject[20];
  float salary;

};

void School::get_common_data();
{
  cout<<"enter the name"<<endl;
  cin.getline(name,20);
  cout<<"enter the age"<<endl;
  cin>>age;
  cin.ignore();
  cout<<"enter the address"<<endl;
  cin.getline(adress,50);
}

void School::show_common_data();
{
  cout<<" the name"<<endl;
  cout<<name;
  cout<<" the age"<<endl;
  cout<<age;
  cout<<" the address"<<endl;
  cout<<address;

}

void Student::get_details()
{
  get_common_data();
  cout << "Enter roll number : "; cin >> roll_number;
  cin.ignore();
   // cout << "Enter name : "; cin.getline(name, 20);
   // cout << "Enter age : "; cin >> age;
  cout << "Enter standard : "; cin >> standard;
  cin.ignore();
  // cout << "Enter address : "; cin.getline(address, 50);
}

void Student::show_details()
{
  show_common_data();
  cout << "Roll number : " << roll_number << endl;
  // cout << "Name : " << name << endl;
  cout << "Standard : " << standard << endl;
  // cout << "Age : " << age << endl;
  // cout << "Address : " << address << endl;
}

int main()
{
  Student student;

  // Student.get_common_data();
  Student.get_details();
  // Student.show_common_data();
  Student.show_details();

  return 0;
}
