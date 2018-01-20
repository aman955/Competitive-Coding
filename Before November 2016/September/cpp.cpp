#include<iostream>
using namespace std;

class circle
{
	private:
		int radius;
		float x,y;
		
	public:
		circle()
		{
		}
		
		circle(int rr,float xx,float yy)
		{
			radius=rr;
			x=xx;
			y=yy;
		}
		
		circle operator =(circle& c)
		{
			cout<<"Assignment operator invoked"<<endl;
			radius=c.radius;
			x=c.x;
			y=c.y;
			return *this;
		}
		
		circle(circle& c)
		{
			cout<<"Copy constructor invoked"<<endl;
			radius=c.radius;
			x=c.x;
			y=c.y;
		}
		
		void showdata()
		{
			cout<<"radius = "<<radius<<endl;
			cout<<"x cor = "<<x<<endl;
			cout<<"y cor = "<<y<<endl;
		}
};

int main()
{
circle c1(10,2.5,2.5);
circle c2,c4;
c2=c1;
c4.circle(c1);
circle c3=c1;

c1.showdata();
c2.showdata();
c3.showdata();
c4.showdata();	
}
