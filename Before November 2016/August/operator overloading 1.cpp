#include<iostream>
using namespace std;

class complex
{
	private:
		float real,imag;
		
	public:
		complex()
		{
		}
		
		complex(float r,float i)
		{
			real=r;
			imag=i;
			
		}
		
		void getdata()
		{
			float r,i;
			cout<<"Enter real and imaginary part"<<endl;
			cin>>r>>i;
			real=r;
			imag=i;
		}
		
		void setdata(float r,float i)
		{
			real=r;
			imag=i;
		}
		
		void displaydata()
		{
			cout<<"real= "<<real<<endl;
			cout<<"imag= "<<imag<<endl;
		}
		
		complex operator+(complex c)
		{
			complex temp;
			temp.real=real+c.real;
			temp.imag=imag+c.imag;
			return temp;
		}
	};
	
	int main()
	{
		complex c1(3,4),c2(4,5);
		
		c2=c1+c2;
		c2.displaydata();
		
	}
