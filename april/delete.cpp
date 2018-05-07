#include<iostream>

using namespace std;

int delete_ele(int *array,int size,int pos)
{
  for(int i=pos; i<size; i++)
  {
    array[i] = array[i+1];
  }

  return --size;
}

int main()
{
  int array[]={1,2,3,4,5,6,7,8,9};
  int s,pos;
  cout<<"enter the pos"<<endl;
  cin>>pos;
  s=delete_ele(array,9,pos);

  for(int i=0;i<s;i++)
  {
    cout<<array[i];
    cout<<";";
  }

}
