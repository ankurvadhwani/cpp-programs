//question 09

#include <constream.h>

class Three
{
	struct phone
	{
		int area;    //areacode
		int exc;     //exchange
		int num;     //number
	};
	public:
	phone p1,p2;
	void get()
	{
		p2.area = 212;
		p2.exc = 767;
		p2.num = 8900;
		cout<<"Enter areacode, exchange and number : "<<endl;
		cin>>p1.area>>p1.exc>>p1.num;
	}
	void show()
	{
		cout<<"my number is : ("<<p2.area<<")"<<p2.exc<<"-"<<p2.num<<endl;
		cout<<"your number is : ("<<p1.area<<")"<<p1.exc<<"-"<<p1.num<<endl;

	}
};
void main()
{
	clrscr();
	Three t;
	t.get();
	t.show();
	getch();
}