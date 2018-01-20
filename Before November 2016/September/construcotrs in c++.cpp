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

class C:public B
{
	private:
		int i;
	public:
		 C()
		{
			cout<<"this is derived class C constructor"<<endl;
		}
		 C(int j)
		{
			cout<<"this is derived class C argument constructor"<<endl;
		}
		
		~ C()
		{
			cout<<"this is derived class C destructor"<<endl;
		}
		
};

int main()
{
	C aman,ar(6);
	
}
