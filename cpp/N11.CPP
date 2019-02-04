
// Question 11
#include <constream.h>

class rational
{
	double numerator;
	double denominator;
	public:
	rational()
	{
	}
	rational(double u,double v)
	{
		numerator=u;
		denominator = v;
	}
	friend istream & operator >>(istream &,rational &);
	friend ostream & operator <<(ostream &,rational);
	friend rational operator +(rational ,rational);
	void reduce()
	{
		numerator;
		denominator;
		int j,k,em;
		if(numerator>denominator)
		{
			j=numerator;
			k=denominator;
		}
		else
		{
			k=numerator;
			j=denominator;
		}
		while(k!=0)
		{
			em = j%k;
			j=k;
			k=em;
		}
		numerator /=j;
		denominator /=j;
		cout<<numerator<<endl<<denominator;
	}
};
istream & operator >>(istream &karan,rational &r1)
{
	karan>>r1.numerator>>r1.denominator;
	return karan;
}
ostream & operator <<(ostream &saad,rational r1)
{
	saad<<"Numerator = "<<r1.numerator<<endl;
	saad<<"Denominator = "<<r1.denominator<<endl;
	return saad;
}
rational operator +(rational s,rational t)
{
	rational temp;
	int fg,z,m;
	fg=(s.denominator>t.denominator) ? s.denominator : t.denominator;
	int a=s.denominator;
	int b=t.denominator;
	while(1)
	{
			if(fg%a==0 && fg%b==0)
			{
				temp.denominator=fg;
				break;
			}
			++fg;
	}
	z =(temp.denominator/s.denominator)*s.numerator;
	m =(temp.denominator/t.denominator)*t.numerator;
	temp.numerator = z+m;
	return temp;
}

void main()
{
	clrscr();
	double da1 = 10;
	double da2 = 5;
	rational s1(da1,da2);
	rational s2,s3;
	cout<<endl<<"Enter object1 rational number : "<<endl;
	cin>>s2;
	cout<<s2;
	cout<<endl<<"object2 rational number : "<<endl;
	cout<<s1;
	cout<<endl<<"Addition of object1 + object2 = object3 "<<endl;
	s3=s1+s2;
	cout<<s3;
	cout<<endl<<"Reducing object3 by calling reduce() : "<<endl;
	s3.reduce();
	getch();

}


