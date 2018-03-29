#include<iostream>

using namespace std;

class train
{
  int  trainno;
  int  distance;
  int fuel;
  float amount;

  //private members
  void ammount();
  void fuell();
  //public members
public:
  void getticket();
  void showticket();
};

void train::showticket()
{
  cout<<"train no."<<endl;
  cout<<trainno<<endl;
  cout<<" the distance is"<<endl;
  cout<<distance<<endl;
  cout<<"amount"<<endl;
  cout<<amount<<endl;
  cout<<" the fuel capacity is"<<endl;
  cout<<fuel<<endl;

}

void train::getticket()
{
    cout<<"enter the train number"<<endl;
    cin>>trainno;
    cout<<"enter the distance"<<endl;
    cin>>distance;
    fuell();
    ammount();
}

void train::ammount()
{
  if (distance <= 1500)
  {
    amount = distance*0.5;
  }
  else if(distance > 1500 && distance <= 2000)
  {
    amount=distance*0.4;
  }
  else if(distance > 2000 && distance <= 3000)
  {
    amount =  distance*0.3;
  }
  else
  {
    amount=distance*0.2;
  }
}

void train::fuell()
{
  if (distance <= 1500)
  {
    fuel=250;
  }
  else if (distance > 1500 && distance <= 3000)
  {
    fuel=1000;
  }
  else
  {
    fuel=2500;
  }
}



int main()
{
  train t;
  t.getticket();
  t.showticket();

  return 0;
}
