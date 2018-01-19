#include<iostream>
#include<vector>
#include<string>
using namespace std;

string& reftoElement(vector<string>& inventory,int i);
int main()
{
	vector<string> inventory;
inventory.push_back("sword");
inventory.push_back("armor");
inventory.push_back("shield");
cout<<"Sending the returned reference to cout:\n";
cout<<reftoElement(inventory,0)<<"\n\n";
cout << "Assigning the returned reference to another reference.\n";
string& rStr=reftoElement(inventory,1);
cout<<rStr<<endl;
rStr="Aman";
cout<<inventory[1];

}

string& reftoElement(vector<string>& vec,int i)
{
	return vec[i];
}
