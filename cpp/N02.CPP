// Question 02
#include <constream.h>

class A
{
	int a;
	char b;
	public:
	void get()
	{
		a=100;
		b='a';
		cout<<"A = "<<a<<endl<<"b = "<<b;
	}
};
void main()
{
	clrscr();
	A a;
	a.get();
	getch();
}