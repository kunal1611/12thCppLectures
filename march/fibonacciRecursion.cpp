#include<iostream>

using namespace std;

long fibo(int n)
{
    if (n==0)
    {
      return 0;
    }
    else if(n==1)
    {
      return 1;
    }

    return fibo(n-1) + fibo(n-2);
}

int main()
{
  int n;

  cout<<"enter the number"<<endl;
  cin>>n;

  cout<<"the term is"<<endl<<fibo(n);

  return 0;
}
