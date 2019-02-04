//question 10
#include <constream.h>

class DB;
class DM
{
	int meter,cent;    //cent = centimeter
	public:
	void get()
	{
		cout<<"Enter meter and Centimeter : "<<endl;
		cin>>meter>>cent;
	}
	friend DB carry(DM,DB);
};

class DB
{
	int feet,inches;
	public:
	void get()
	{
		cout<<"Enter feet and inches : "<<endl;
		cin>>feet>>inches;
	}
	void dis()
	{
		cout<<"Feet : "<<feet<<endl<<"inches : "<<inches;
	}
	friend DB carry(DM,DB);
};

DB carry(DM m,DB b)
{

	DB temp;
	m.cent += m.meter*100;
	temp.inches = m.cent/2.54;
	temp.inches += b.inches;
	if(temp.inches>=12)
	{
		temp.feet=b.feet+temp.inches/12;
		temp.inches= temp.inches%12;
	}
	return temp;
}

void main()
{
	clrscr();
	DM d;
	d.get();
	DB b,g;
	b.get();
	g=carry(d,b);
	g.dis();
	getch();
}