#include<iostream>

using namespace std;

int LinearSearch(int *array,int n,int e)
{
  for(int i=0; i<n;i++)
  {
    if(array[i]==e)
    {
      return i;
    }

  }
  return -1;

}
int main()
{
  int a[]={1,2,3,4,5};
  int m,w;
  cout<<"enter the element"<<endl;
  cin>>m;

  w=LinearSearch(a,5,m)+1;
  cout<<"index of the element if present"<<endl;
  cout<<w;



}
