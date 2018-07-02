#include<iostream>
#include<fstream>

using namespace std;

int main()
{
  char a[100];
  cout<<"enter the string"<<endl;
  cin.getline(a,20);

  ofstream fout;
  fout.open("test2.txt",ios::out);
  fout<<a;
  fout.close();

  ifstream fin;
  fout.open("test2.txt",ios::in);
  fin>>a;
  fin.close();
  cout<<a;
  return 0;
}
