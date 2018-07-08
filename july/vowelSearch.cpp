#include <iostream>
#include <fstream>

using namespace std;

int vowel(char *string)
{
  int count=0;
  for(int i=0; string[i] != '\0' ;i++)
  {
    if(string[i]=='a' || string[i]=='e'|| string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U'  )
    {
      count ++;
    }
  }
  return count;
}



int main()
{
  char input[80];
  char output[80];

  cout<<"enter the string"<<endl;
  cin.getline(input,80);

  ofstream fout;
  fout.open("vowel.txt", ios::out);
  fout<<input;
  fout.close();

  ifstream fin;
  fin.open("vowel.txt", ios::in);
  fin.getline(output, 80);

  cout << vowel(output) << endl;
  return 0;
}
