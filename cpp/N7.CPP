// question = 7
#include <constream.h>

struct point
{
	int xaxis;
	int yaxis;
};
struct point p1,p2,p3;
class model
{

public:
	void get()
	{
		cout<<"Enter cordinates for P1 : ";
		cin>>p1.xaxis>>p1.yaxis;
		cout<<"Enter cordinates for P2 : ";
		cin>>p2.xaxis>>p2.yaxis;
	}
	void add();
};
void model :: add()
{
	p3.xaxis = p1.xaxis+p2.xaxis;
	p3.yaxis = p1.yaxis+p2.yaxis;
	cout<<"Coordinates of P1 + P2 : "<<p3.xaxis<<" "<<p3.yaxis<<endl;
}
void main()
{
	clrscr();
	model s;
	s.get();
	s.add();
	getch();
}