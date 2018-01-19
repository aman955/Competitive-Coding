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
		
		complex add_complex(complex e)
		{
			complex temp;
			temp.real=real+e.real;
			temp.imag = imag+e.imag;
			return temp;
		}
		
		complex mul_complex(complex c2)
		{
			complex t;
			
			t.real=real*c2.real-imag*c2.imag;
			t.imag=real*c2.imag+c2.real*imag;
			return (t);
			
		}
};

int main()
{
	complex c1,c2(1,2),c3,c4,c5(5,6),c6,c7;
	
	c1.getdata();
	c4=c1.add_complex(c2);
	c4.displaydata();
	
	c4.setdata(1,2);
	c6=c5.mul_complex(c4);
	c6.displaydata();
}
