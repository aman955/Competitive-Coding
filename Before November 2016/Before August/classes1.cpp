#include<iostream>
#include<string>

using namespace std;

class Critter
{
	public:
		int m_hunger;
		string joho;
		void Greet();
};

void Critter::Greet()
{
	cout<<"Hi!I am Critter my hunger level is "<<m_hunger<<endl;
}

int main()
{
	Critter crit1;
	Critter crit2;
	
	crit1.m_hunger = 9;
	crit2.m_hunger = 3;
	crit1.joho = "amanrathore" ;
	
	cout<<"crit1's hunger level is " <<crit1.joho<<endl;
	cout<<"crit2's hunger level is "<<crit2.m_hunger<<endl;
	
	crit1.Greet();
	crit2.Greet();
}
