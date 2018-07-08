#include <iostream>
#include <fstream>

using namespace std;

class Student
{
  int roll;
  char name[20];

public:

  void get()
  {
    cout << "Enter roll number : ";
    cin >> roll;
    cin.ignore();

    cout << "Enter the name : ";
    cin.getline(name, 20);
  }

  void show()
  {
    cout << "Roll number : " << roll << endl;
    cout << "Name : " << name << endl;
  }

void get_roll()
{
  return roll;
}

};

int main()
{

  // Student s[3];

 // writing objects to file
 //  for(int i = 0; i < 3; i++)
 //  {
 //    cout << "Student " << i + 1 << endl;
 //    s[i].get();
 //  }
 //
 //  ofstream fout;
 //  fout.open("sortedStud.txt", ios::out);
 //  for(int i = 0; i < 3; i++)
 //  {
 //    fout.write((char *) &s[i], sizeof(s[i]));
 //  }
 //
 //  fout.close();

  //reading objects from file
  // ifstream fin;
  // fin.open("sortedStud.txt", ios::in);
  //
  // for(int i = 0; i < 3; i++)
  // {
  //   fin.read((char *) &s[i], sizeof(s[i]));
  //   cout << "Student " << i + 1 << endl;
  //   s[i].show();
  // }


Student input;
Student s;
input.get();

ofstream tempfile;
tempfile.open("temp.txt",ios::out);

ifstream mainfile;
mainfile.open("sortedStud.txt",ios::in);

while(!mainfile.eof())








  return 0;
}
