//question 3

#include <constream.h>

class Crt
{
	int a;
	public:
	void get()
	{
		cout<<"Enter a number : "<<endl;
		cin>>a;
	}
	void add()
	{
		int f=0;
		while(a>0)
		{
		     f+=a%10;
		     a=a/10;
		}
		cout<<"cross sum of a number : "<<f;
	}
};

void main()
{
	clrscr();
	Crt d;
	d.get();
	d.add();
	getch();
}