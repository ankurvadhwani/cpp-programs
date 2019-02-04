//question 12

#include <constream.h>

class father
{
	protected:
	int age;
	public:
	father()
	{
	}
	father(int x)
	{
		age=x;
	}
	virtual void iam()
	{
		cout<<"I AM THE FATHER ,My age is :"<<age<<endl;
	}
};
class daughter : public father
{
	protected:
	int age;
	public:

	daughter(int x)
	{
		age=x;
	}
	virtual void iam()
	{
		cout<<"I AM THE DAUGHTER ,My age is :"<<age<<endl;
	}
};
class son : public father
{
	protected:
	int age;
	public:
	son(int x)
	{
		age=x;
	}
	virtual void iam()
	{
		cout<<"I AM THE SON ,My age is :"<<age<<endl;
	}
};

void main()
{
	clrscr();

	father f(50);
	daughter g(21);
	son s(25);
	f.iam();
	g.iam();
	s.iam();

	father *p = &g;
	p->iam();
	p=&s;
	p->iam();
	getch();
}