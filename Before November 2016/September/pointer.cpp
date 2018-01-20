#include<iostream>
using namespace std;

class A
{
	private:
		int i;
	public:
		 A()
		{
			cout<<"this is base class constructor"<<endl;
		}
		 A(int j)
		{
			
			cout<<"this is base class argument constructor"<<endl;
		}
		~ A()
		{
			cout<<"this is base class destrcutor"<<endl;
		}
};
class B:public A
{
	private:
		int i;
	public:
		 B()
		{
			cout<<"this is derived class B constructor"<<endl;
		}
		 B(int j)
		{
			cout<<"this is derived class B argument constructor"<<endl;
		}
		
		~ B()
		{
			cout<<"this is derived class B destructor"<<endl;
		}
		
};

int main()
{
	A *ptr;
	B obj;
	ptr->obj;
}
