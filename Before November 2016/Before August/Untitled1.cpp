#include<iostream>
using namespace std;
int main()
{
	int aliens_killed=100;
	const int ALIEN_POINTS=1500;
	int score=aliens_killed*ALIEN_POINTS;
	enum difficulty{NOVICE, EASY=2, HARD, INSANE=5};
 difficulty aman= HARD;
 enum points{ aaa, bbb, ccc=8, ddd, eee};
 points rathore= ddd;
 cout<<"NAME IS"<<aman*rathore*score<<endl;
}
