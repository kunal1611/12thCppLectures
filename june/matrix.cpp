#include<iostream>

using namespace std;

void add(int a[10][10],int b[10][10],int r,int c,int c[10][10])
{
  for(int i=0; i<r; i++)
  {
    for(int j=0; j<c; j++)
    {
      c[i][j] = a[i][j] + b[i][j];
    }
  }
}

void sub(int a[10][10],int b[10][10],int r,int c,int c[10][10])
{
  for(int i=0; i<r; i++)
  {
    for(int j=0; j<c; j++)
    {
      c[i][j] = a[i][j] + b[i][j];
    }
  }
}
