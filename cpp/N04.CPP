//question 4
#include <constream.h>
#include <string.h>

class Cross
{
	char *name;
	int len;
	public:
	void get()
	{
		cout<<"Enter Name : "<<endl;
		cin>>name;
	}
	void cr()
	{
		len = strlen(name);
		cout<<"Number of character in string : "<<len<<endl;
	}
};
void main()
{
	clrscr();
	Cross as;
	as.get();
	as.cr();
	getch();
}