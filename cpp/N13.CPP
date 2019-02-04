// q13
#include <constream.h>
#include <stdio.h>
class Employee
{
	protected:
	char *name;
	int salary;
	public:

};
class Manager : public Employee
{
	protected:
	char *dept;
	public:
	void get();
	void show();
};
void Manager :: get()
{
	cout<<"Enter name : ";
	gets(name);
	cout<<"Enter salary : ";
	cin>>salary;
	cout<<"enter department : ";
	gets(dept);
}
void Manager :: show()
{
	cout<<"Name : "<<name<<endl;
	cout<<"Salary : "<<salary<<endl;
	cout<<"Department : "<<dept<<endl;
}
class Executive : public Manager
{
	public:
	void display(Manager m)
	{
		cout<<"Executive "<<endl;
		m.get();
		m.show();
	}
};
void main()
{
	clrscr();
	Manager m1;
	m1.get();
	Executive e1;
	m1.show();
	e1.display(m1);

	getch();
}