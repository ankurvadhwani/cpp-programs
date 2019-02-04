//question 06

#include <constream.h>

class Alt
{
	int x,y;
	public:
	void get()
	{
		cin>>x>>y;
	}
	void dis()
	{
		cout<<x<<" "<<y;
	}

	friend Alt sum(Alt ,Alt);
};
Alt sum(Alt a,Alt b)
{
	Alt temp;

	temp.x = a.x+b.x;
	temp.y = a.y+b.y;
	return temp;
}
void main()
{
	clrscr();
	Alt p1,p2,p3;
	cout<<"Enter Coordinates of p1 : ";
	p1.get();
	cout<<"Enter Coordinates of p2 : ";
	p2.get();
	p3 =sum(p1,p2);
	cout<<"Coodinates of p1+p2 are : ";
	p3.dis();
	getch();

}