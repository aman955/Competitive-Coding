#include <iostream>
#include <string>
#include <vector>
using namespace std;
void display(const vector<string> inventory);
int main()
{
vector<string> inventory;
inventory.push_back("sword");
inventory.push_back("armor");
inventory.push_back("shield");
display(inventory);
return 0;
}
//parameter vec is a constant reference to a vector of strings
void display(const vector<string> rat)
{
	for(vector<string>::const_iterator iter = rat.begin();iter<rat.end();iter++)
	cout<<*iter<<endl;
}
