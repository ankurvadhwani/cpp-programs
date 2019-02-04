// Question 01
#include <constream.h>

class A
{
	public:
	void get()
	{
		cout<<"Hello, World";
	}
};
void main()
{
	clrscr();
	A a;
	a.get();
	getch();
}