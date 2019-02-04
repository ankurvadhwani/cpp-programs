#include <iostream.h>
#include <conio.h>
//ascii space = 32   tab = 9
class toolbooth
{
	unsigned int tocar;
	double money;
	public:
	toolbooth()
	{
		tocar=0;
		money=0;
	}
	void payingcar();
	void nopaycar();
	void display()
	{
		cout<<"Total car : "<<tocar<<endl;
		cout<<"Total money collected : "<<money<<endl;
	}
};
void toolbooth::payingcar()
{
	tocar++;
	money+=1+0.50;
}
void toolbooth::nopaycar()
{
	tocar++;
}
void main()
{
	clrscr();
	toolbooth th;
	char c;
	int i=1;
	cout<<"Command"<<endl;
	cout<<"space = payingcar  tab = nonpayingcar  esc = exit"<<endl;
	while(i<=1)
	{
		while(c=cin.get()==32)
		{
			cout<<"you pressed space"<<endl;
			th.payingcar();
			th.display();


		}
		while(c=cin.get()==9)
		{
			cout<<"you pressed tab"<<endl;
			th.nopaycar();
			th.display();
		}
		while(c=cin.get()==27)
		{
			cout<<"you pressed Escape"<<endl;
			th.display();
			i++;
		}

	 }
	getch();
}
