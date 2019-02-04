#include <constream.h>
#include <math.h>

class Com
{
	public:
	double power(double fg,int p=2)
	{
		double te=1;
		for(int i=p;i>0;i--)
		{
			te*=fg;



		}
		return te;
	}
};

void main()
{
	clrscr();
	Com as;
	double n,sd,m;
	int p1=2;
	cout<<"Enter value of n"<<endl;
	cin>>n;
	cout<<"n to the power p"<<endl;
	m=pow(n,p1);
	cout<<"using standard library pow() function = "<<endl;
	cout<<m<<endl<<endl;

	sd=as.power(n);
	cout<<"multiplication of n x p times "<<endl;
	cout<<"using power() funuction = "<<endl;
	cout<<sd<<endl;
	getch();
}