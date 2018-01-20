#include<iostream>
#include<vector>
using namespace std;

void fillVector(vector<int>&);
void printVector(const vector<int>&);

int main()
{
	vector<int> myVector;
	fillVector(myVector);
	printVector(myVector);
	
	return 0;
}

void fillVector(vector<int>& newMyvector)
{
	cout<<"type a list of numbers"<<endl;
	int input;
	cin>>input;
	while(input!=-1)
	{
		newMyvector.push_back(input);
		cin>>input;
	}
	cout<<endl;
}

void printVector(const vector<int>& newMyvector)
{
	for(int i=0;i<newMyvector.size();i++)
	cout<<newMyvector[i]<<endl;
}
