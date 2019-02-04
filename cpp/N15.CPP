//question 15

#include <constream.h>
#include <stdio.h>
#include <string.h>

class STR
{
	char *s;
	public:
	void reverse(char *);
	void get()
	{
		cout<<"Enter STRING : ";
		gets(s);
		cout<<strlen(s);
		reverse(s);
	}

};
void STR :: reverse(char *c)
{
	int len=strlen(c);
	for(int i=strlen(c)-1;i>=0;i--)
	{
		cout<<c[i];
	}
}
void main()
{
	clrscr();
	STR a;

	a.get();
	getch();
}