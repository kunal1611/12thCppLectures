#include <iostream>
#include <fstream>
#include<string.h>
#include <ctype.h>
using namespace std;

int upper(char *string)
{
  int count=0;

  for(int i = 0;string[i] != '\0';i++)
  {
    if(isupper(string[i]))
    {
      count++;
    }
  }
  return count;
}

int lower(char *string)
{
  int count=0;

  for(int i = 0;string[i] != '\0';i++)
  {
    if(islower(string[i]))
    {
      count++;
    }
  }
  return count;
}

int main()
{
  char s[100];
  cout<<"enter the string"<<endl;
  cin.getline(s,100);


  ofstream fout;
  fout.open("test3.txt", ios::out);
  fout<<s;
  fout.close();

  ifstream fin;
  fin.open("test3.txt", ios::in);
  fin.getline(s, 100);
  fin.close();

  cout<<"the string is:"<<s<<endl;
  cout<<"upper characters:"<<upper(s)<<endl;
  cout<<"lower characters:"<<lower(s)<<endl;

  return 0;





}
