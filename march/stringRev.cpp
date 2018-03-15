#include<iostream>
#include <stdio.h>
#include<string.h>

using namespace std;

void strrev(char str[],int i,int j)
{
  if(i>=j)
  return;

  char temp;
  temp=str[i];
  str[i]=str[j];
  str[j]=temp;

  strrev(str,i+1,j-1);
}

int main()
{
  char ch[10],rev[10];

  cout<<"enter the string"<<endl;
  gets(ch);

  int i=0;
  int j=strlen(ch)-1;

strrev(ch,i,j);

  cout<<"the reverses string  is"<<ch << endl;kunkasdf;a;skdjfadf

  return 0;
}
