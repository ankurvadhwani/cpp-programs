#include <constream.h>

class shape
{
	protected:
	double x,y;
	public:
	shape()
	{
		x=0;
		y=0;
	}
	shape(double a,double b)
	{
		x=a;
		b=y;
	}
	void get()
	{
		cout<<"Enter value of x and y : ";
		cin>>x>>y;
	}
	virtual void display_area()=0;
};
class triangle : public shape
{
	public:
	triangle()
	{
	}
	triangle(double a,double b):shape(a,b)
	{
	}
	void display_area()
	{
		cout<<"Area of triangle : "<<(x*y)/2<<endl;
	}
};
class rectangle : public shape
{
	public:
	rectangle()
	{
	}
	rectangle(double a,double b):shape(a,b)
	{
	}
	void display_area()
	{
		cout<<"Area of REctangle : "<<(x*y)<<endl;
	}
};

void main()
{
	clrscr();
	int c;
	triangle t;
	rectangle r;
	t.get();
	t.display_area();
	r.get();
	r.display_area();

getch();
}