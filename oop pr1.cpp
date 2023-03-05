#include<iostream>
using namespace std;
class duration
{
	public:
	int days;
	int hours;	
	int minutes;
	int seconds;
	duration()
	{
		days=0;
		hours=0;
		minutes=0;
		seconds=0;
	}
	duration(int days,int hours,int minutes,int seconds)
	{
	this -> days=days;
	this -> hours=hours;	
	this -> minutes=minutes;
	this -> seconds=seconds;
	}
	duration(int seconds)
	{
		this ->seconds=seconds;
	}
};
int main()
{
	int s;
	cout<<"Enter Number Of Seconds :"<<endl;
	cin>>s;
	int a,b,c;
	if(s>=60 && s<3600)
	{
		a=s/60;
		b=0,c=0;
		cout<<"THE TIME DURATION IS : "<<endl<<"MINUTES : "<<a<<endl<<"HOURS : "<<b<<endl<<"DAYS :"<<c<<endl;
	}
	else if(s>=3600 && s<86400)
	{
		b=s/3600;
		a=0,c=0;
		cout<<"THE TIME DURATION IS : "<<endl<<"MINUTES : "<<a<<endl<<"HOURS : "<<b<<endl<<"DAYS :"<<c<<endl;
	}
	else if(s>=86400)
	{
		c=s/86400;
		a=0,b=0;
		cout<<"THE TIME DURATION IS : "<<endl<<"MINUTES : "<<a<<endl<<"HOURS : "<<b<<endl<<"DAYS :"<<c<<endl;
	}
	duration d1;
	cout<<"THE DETAIL OF D1 :"<<endl;
	cout<<"Hours :"<<d1.hours<<endl;
	cout<<"Day :"<<d1.days<<endl;
	cout<<"Minutes :"<<d1.minutes<<endl;
	cout<<"Seconds :"<<d1.seconds;	
	return 0;
}
