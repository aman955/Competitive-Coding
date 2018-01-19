#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	int i,j;
	const int NUM_WORDS = 6;
    const string WORDS[NUM_WORDS][2]= { {"aman","Your Name"},
	                               {"wall", "Do you feel you’re banging your head against something?"},
                                   {"glasses", "These might help you see the answer."},
                                   {"labored", "Going slowly, is it?"},
                                  {"persistent", "Keep at it."},
                                 {"jumble", "It’s what the game is all about."}  
	                                                                          };
cout<<"LETS BEGIN THE WORD JUMBLE GAME"<<endl;
cout<<"Enter hint for a hint"<<endl;
cout<<"Enter quit to exit the game"<<endl;
srand(static_cast<unsigned int>(time(0)));
int choice=(rand()%NUM_WORDS);
string word=WORDS[choice][0];
string hintx=WORDS[choice][1];
string jumble=word;
int length=word.size();
for(i=0;i<2*length;i++)
{
	int index1 = rand()%length;
	int index2 = rand()%length;
	char temp=jumble[index1];
	jumble[index1]=jumble[index2];
	jumble[index2]=temp;
}
cout<<"JUMBLED WORD "<<endl;
cout<<jumble<<endl;
string guess;
string quit;
string hint;
cin>>guess;
while(guess!="quit"&&guess!=word)
{

if(guess=="hint"){
cout<<hintx<<endl;
}
else 
cout<<"SORRY THAT'S NOT THE WORD"<<endl;
	cin>>guess;
}
if(guess==word)
cout<<"CONGRATS YOU HAVE GUESSED THE WORD"<<endl;
else
cout<<"THANX FOR PLAYING GAME. GOOD BYE";
}



