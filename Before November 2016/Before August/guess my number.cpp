#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int secretNumber = rand()%21;
	int tries=0;
	int guess;
	cout<<"Welcome to Guess my Number";
	do
	{
		cout<<"\nENTER YOUR GUESS"<<endl;
		cin>>guess;
		tries++;
		if(guess>secretNumber)
		{
			cout<<"Too High"<<endl;
		}
		else if(guess<secretNumber)
		{cout<<"Too Low"<<endl;
		}
	}
	while(guess!=secretNumber);
	cout<<"YOU GUESSED THE NUMBER IN "<<tries<<"tries.";
return 0;
}
