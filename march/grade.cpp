#include<iostream>
#include<stdio.h>

using namespace std;

class Student
{
  int rollno;
  char name[20];
  float marks[3];
  char grade();


public:
  void get_data();
  void show_data();

};

void Student::get_data()
{

  cout << "Enter roll no. : "; cin >> rollno;
  cin.ignore();
  cout << "Enter name : "; gets(name);
  cout << "Enter marks : ";
  for(int i = 0; i < 3; i++)
  {
    cin>>marks[i];
  }

}

void Student::show_data()
{
cout << "---------------------------------------------------------------" << endl;
cout << "student rollno. : " << rollno << endl;
cout << "student name : " << name << endl;
 // for(int i = 0;i < 5;i++)
 // {
 //   cout<<marks[i] << endl;
 // }
cout<< "student's grade is :"<< grade() <<endl;
cout << "---------------------------------------------------------------" << endl;
}

char Student::grade()
{
    float avg = 0;
      for(int i= 0;i <3;i++)
      {
        avg += marks[i];
      }

      avg /=3.0;

    if( avg <=30)
    {
      return 'F';
    }
    else if( avg <=50)
    {
      return 'E';
    }
    else if( avg <=60)
    {
      return 'D';
    }
    else if( avg <=70)
    {
      return 'C';
    }
    else if( avg <=80)
    {
      return 'B';
    }
    else if( avg <=90)
    {
      return 'A';
    }
    else if( avg <=100)
    {
      return 'O';
    }
    else
    {
      return '~';
    }
}


int main()
{
  Student std[3];

  for(int i = 0;i < 3;i++)
  {
    std[i].get_data();
  }
  for(int i = 0;i < 3;i++)
  {
    std[i].show_data();
  }
  return 0;
}
