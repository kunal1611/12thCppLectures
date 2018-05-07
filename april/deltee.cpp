#include<iostream>

using namespace std;

int poss(int *array,int size,int e)
{
  for(int i=0;i<size;i++)
  {
    if(array[i]==e)
    {
      return i;
    }
  }
}


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
  int s,ss,pos;
  cout<<"enter the element"<<endl;
  cin>>pos;
  s=poss(array,9,pos);
  ss=delete_ele(array,9,s);

  for(int i=0;i<ss;i++)
  {
    cout<<array[i];
    cout<<";";
  }

}
