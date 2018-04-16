#include<iostream>

using namespace std;

class Base
{
  int a,b;

public:
  void get();
  void show();

};

class Derived : public Base
{
 int c,d;

public:
  void insert();
  void display();

};

void Base::get()
{
  cout << "base class called !" << endl;
  cout << "a :" <<endl; cin >> a ;
  cout << "b :" <<endl; cin >> b ;
}

void Base::show()
{
  cout << "base  class called !" << endl;
  cout << "a :" << a <<endl;
  cout << "b :" << b <<endl;
}

void Derived::insert()
{
  cout << "derived class called !" << endl;
  cout << "c :" <<endl; cin >> c ;
  cout << "d :" <<endl; cin >> d ;

}

void Derived::display()
{
  cout << "derived class called !" << endl;
  cout << "a :" << c <<endl;
  cout << "b :" << d <<endl;
}

int main()
{
  Base b;
  Derived d;

  b.get();
  b.show();

  d.get();
  d.show();

  return 0;
}
