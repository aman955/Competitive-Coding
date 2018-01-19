#include<iostream>
using namespace std;

class index
{
	private:
		int i,j;
	public:
		
		index()
		{
		}
		
		index(int x,int y)
		{
			i=x;
			j=y;
			
		}
		
		void operator++(index k)
		{
			i=i+j+k.i+k.j;
			i++;
		
		}
		
		void displaydata()
		{
			cout<<i;
		}
	
};

int main()
{
	index c1(5,6),c2(7,8);
	c1+++(c2);
    c1.displaydata();
  
	
}
