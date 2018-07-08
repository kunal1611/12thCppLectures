#include <iostream>
#include <fstream>

using namespace std;

int countp(char *string)
{
  int count=0;

  if(string[0]=='p'|| string[0]=='P')
  {
    count++;
  }

  for(int i=0; string[i] != '\0' ;i++)
  {
    if(string[i]==' ' && string[i+1]=='p')
    {
      count++;
    }
    if(string[i]==' ' && string[i+1]=='P')
    {
      count++;
    }


  }
  return count;
}



int main()
{
  char input[80];
  char output[80];

  // cout<<"enter the string"<<endl;
  // cin.getline(input,80);
  //
  // ofstream fout;
  // fout.open("search.txt", ios::out);
  // fout<<input;
  // fout.close();

  ifstream fin;
  fin.open("search.txt", ios::in);
  fin.getline(output, 80);

  cout << countp(output) << endl;



  return 0;
}
