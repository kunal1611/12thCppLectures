#include<iostream>

using namespace std;

void print(int*, int);
void sort(int &, int &);

void sort(int *a,int n)
{
  for(int pass=1; pass<=n-1; pass++)
  {
    for(int j=0; j<n-pass; j++)
    {
      if(a[j]>a[j+1])
      swap(a[j],a[j+1]);
    }
    print(a,n);
  }

}

void swap(int &a,int &b)
{
  int temp;
temp = a;
a = b;
b = temp;
}

void print(int *a,int n)
{
  for(int i=0; i<n; i++)
  {
    cout<<a[i];
  }
  cout << endl;
}




int main()
{
  int a[]={9,8,7,6,5,4,3,2,1};

  sort(a,9);
  cout<<endl;
  print(a, 9);

  return 0;
}
