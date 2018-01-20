#include<iostream>
using namespace std;

class First
{
	protected:
		int val;
		
	public:
	
	First(int tval)
	{
		val=tval;
		cout<<"First Constructor Calling"<<endl;
	}
	void display()
	{
		cout<<"The First calss value is "<<val<<endl;
		
	}
	~First()
	{
		cout<<"First destructor calling"<<endl; 
	}
};

class Second
{
	protected:
		int val;
		
		public:
			
	Second(int tval)
	{
		val=tval;
		cout<<"Second Constructor Calling"<<endl;
		
	}
	
	void display()
	{
		cout<<"The Second calss value is "<<val<<endl;
	}
	
	~Second()
	{
		cout<<"Secong destructor Calling"<<endl;
	}
};

class Third:public First,public Second
{
	int result;
	
	public:
		
	Third(int val1,int val2):First(val1),Second(val2)
	{
		result=First::val+Second::val;
		cout<<"Third Constructor Calling"<<endl;
	}
	
	void display()
	{
		First::display();
		Second::display();
		cout<<"The result is:"<<result<<endl;
	}
	
	~Third()
	{
		cout<<"Third destrutor calling"<<endl;
	}
};

int main()
{
	Third obj(3,4);

	obj.display();
}
	

