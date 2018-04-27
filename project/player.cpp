#include <iostream>

using namespace std;

class Time
{
  int seconds;
  int minutes;
  int hours;

public:
  Time()
  {
    seconds = 0;
    minutes = 0;
    hours = 0;
  }

  void input();
  void output();
};

class Date
{
  int day;
  int month;
  int year;

  public:
  Date()
  {
    day = 0;
    month = 0;
    year = 0;
  }

  void input();
  void output();
};

void Time::input()
{
  cout << "Enter time(hh:mm:ss) : ";
  cin >> hours >> minutes >> seconds;
}

void Date::input()
{
  cout << "Enter date(dd:mm:yy) : ";
  cin >> day >> month >> year;
}

void Time::output()
{
  cout << hours << " : " << minutes << " : " << seconds;
}

void Date::output()
{
  cout << day << " : " << month << " : " << year;
}

class Player
{
  //using containership/aggregation

char name[20];
int age;
Time training_time;
Date dob;
Date doj;

public:
  void get();
  void put();
};
void Player::get()
{
  cin.ignore();
  cout<<"enter the name:";cin.getline(name,20);
  cout<<"enter age :"<<endl; cin>>age;
  cout<<"enter traing time :"<<endl; training_time.input();
  cout<<"enter dob :"<<endl;dob.input();
  cout<<"enter doj :"<<endl;doj.input();
}

void Player::put()
{
  cout<<"name :"<<name<<endl;
  cout<<"age :"<<age<<endl;
  cout<<"training time  :";training_time.output();cout<<endl;
  cout<<"dob:";dob.output();cout<<endl;
  cout<<"doj :";doj.output();cout<<endl;
}

int main()
{
Player player;
player.get();
player.put();

  return 0;
}
