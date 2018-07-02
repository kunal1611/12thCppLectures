#include <iostream>
#include <fstream>

using namespace std;

struct Employee
{
  int eno;
  char name[20];
  float salary;
};

int main()
{
  int num;
  Employee e[10];

  cout << "enter the number of details you want to enter :";
  cin >> num;

  for(int i = 0; i < num; i++)
  {
    cout<<"enter eno:";cin>>e[i].eno;
    cin.ignore();
    cout<<"enter name :"; cin.getline(e[i].name,20);
    cout<<"enter salary :";cin>>e[i].salary;
  }

// fstream fout;
// fout.open("test4.txt",ios::out);
// //file.write((char *) &object,sizeof(object))
// for(int i=0;i<num;i++)
// {
//   fout.write((char *) & e[i], sizeof(e[i]));
// }
// fout.close();

fstream fin;
fin.open("test4.txt",ios::out);
//file.write((char *) &object,sizeof(object))
for(int i=0;i<num;i++)
{
  fout.read((char *) & e[i], sizeof(e[i]));
}
fin.close();


  return 0;
}
