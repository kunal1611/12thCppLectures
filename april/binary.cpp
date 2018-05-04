#include<iostream>

using namespace std;

int LinearSearch(int *array,int n,int e)
{
  int mid;
  int high=n-1,low=0;

  while(low<=high)
  {
    mid=(high+low)/2;
    if(array[mid]==e)
    return mid;
    else if(array[mid]>e)
    high=mid-1;
    else
    low=mid+1;
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
