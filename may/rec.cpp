#include<iostream>

using namespace std;

int sum(int *a,int i)
{
  if(i==0)
  return a[0];

  else
  return a[i] + sum(a,i-1);
}

int main()
{
  int a[]  = {88, 45, 46, 78, 65, 43, 5, 16, 54, 13, 26, 5};
  int lastIndex = 11;

  cout << "Sum = " << sum(a, lastIndex) << endl;
}
