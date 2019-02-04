//question 08
#include <constream.h>

class Opt
{
	float a,b,c;
	public:
	void get();
};
void Opt::get()
{
	char o;  //for operator input
	char m='Y';
	while(m=='Y' || m=='y')
	{
		cout<<"Enter First operand , Operator , Second operand"<<endl;
		cin>>a>>o>>b;
		switch(o)
		{
			case '+':
				c=a+b;
				cout<<"ANSWER="<<c<<endl;
				break;
			case '-':
				c=a-b;
				cout<<"ANSWER="<<c<<endl;
				break;
			case '*':
				c=a*b;
				cout<<"ANSWER="<<c<<endl;
				break;
			case '/':
				c=a/b;
				cout<<"ANSWER="<<c<<endl;
				break;
		}
		cout<<"Do another [Y/N]? ";
		cin>>m;
	}
}
void main()
{
	clrscr();
	Opt cho;
	cho.get();
	getch();
}