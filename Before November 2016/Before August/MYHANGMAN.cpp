#include<iostream>
#include<cctype>
#include<vector>
#include<ctime>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	const int MAX_INCORRECT=8;
	vector<string> words;
	words.push_back("GUESS");
	words.push_back("HANGMAN");
	words.push_back("DIFFICULT");
	words.push_back("RATHORE");
	words.push_back("AMAN");
	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(),words.end());
	const string THE_WORD = words[0];
	string soFar(THE_WORD.size(),'-');
	string used="";
	int wrong=0;
	cout<<"WELCOME TO HANGMAN"<<endl;
	cout<<"LET'S BEGIN THE GAME"<<endl;
	while((wrong<MAX_INCORRECT)&&(soFar!=THE_WORD))
	{
		cout<<"You have "<<MAX_INCORRECT-wrong<<" guesses left"<<endl;
		cout<<"You have used the following characters: "<<used<<endl;
		cout<<"So far the word is "<<soFar<<endl;
		char guess;
		cout<<"Enter your guess"<<endl;
		cin>>guess;
		guess = toupper(guess);
		while(used.find(guess)!=string::npos)
		{
			cout<<"You have already guessed this letter"<<endl;
			cout<<"Enter your guess"<<endl;
			cin>>guess;
			guess = toupper(guess);
		}
		used+=guess;
		if(THE_WORD.find(guess)!=string::npos)
		{
			cout<<"Thats right!"<<guess<<"is in the word."<<endl;
			for(int i=0;i<THE_WORD.length();i++ )
			{
				if(THE_WORD[i]==guess)
				soFar[i]=guess;
			}
		}
		else{
			cout<<"Sorry your guess "<<guess <<" is not in the word"<<endl;
			++wrong;
		}
		}
			if(wrong==MAX_INCORRECT)
			{
				cout<<"You've been hanged"<<endl;
			}
			else
			{
				cout<<"Congrats You have guessed the word"<<endl;
			}
			cout<<"The Word was "<<THE_WORD<<endl;
		}
		
	

