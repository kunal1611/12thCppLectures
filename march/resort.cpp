#include<iostream>
#include<stdio.h>

using namespace std;

class Resort
{
int rno;
char name[20];
int days;
float charges;
float compute()

public:
  void get_data();
  void show_data();
  
};

 void Resort::get_data()
{
  cout << "Enter rno : "; cin >> rno;
  cin.ignore();
  cout << "Enter name : "; gets(name);
  cout << "enter no. of days : ";cin >> days;
  cout << "enter charges : ";cin >> charges;
}

 void Resort::show_data()
{
  cout << "---------------------------------------------------------------" << endl;
  cout << " rno : " << rno<<endl;
  cin.ignore();
  cout << " name : "<<name<<endl;
  cout << " no. of days"<<days<<endl;
  cout << " charges"<<charges<<endl;
  cout << "total amount" << compute()<<endl;
  cout << "---------------------------------------------------------------" << endl;
}

 float Resort::compute()
{
  return charges * days;
}

int main()
{
  Resort r;
  r.get_data();
  r.show_data();
  return 0;
}
