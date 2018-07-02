#include<iostream>
#include<fstream>

using namespace std;

class Student
{
  int rollno;
  char name[20];

public:
  void get()
  {
    cin>>rollno;
    cin.ignore();
    cin.getline(name,20);
  }
  void out()
  {
    cout<<rollno;
    cout<<name;
  }
};


int main()
{
  Student s[4];

  for(int i = 0;i < 4; i++)
  {
    s[i].get();
  }

ofstream fout;
fout.open("stud.txt",ios::out);
for(int i = 0;i < 4; i++)
{
  fout.write((char*)&s[i],sizeof(s[i]));
}
  return 0;
}
