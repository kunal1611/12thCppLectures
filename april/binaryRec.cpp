#include<iostream>

using namespace std;

int binarysearch(int *array,int start,int end, int e)
{
  int mid;

  mid=(start+end )/2;

  if(array[mid]==e)
  {
    return mid;
  }
  if(start>end)
  {
    return -1;
  }
  if(array[mid]<e)
  {
    return binarysearch(array,mid+1,end,e);
  }
  if(array[mid]>e)
  {
    return binarysearch(array,start,mid-1,e);
  }

}

int main()
{
  int a[]={1,2,3,4,5,6,7,8,9};
  int m,w;
  cout<<"enter the element"<<endl;
  cin>>m;

  w=binarysearch(a,0,8,m)+1;
  cout<<"index of the element if present"<<endl;
  cout<<w;
}
