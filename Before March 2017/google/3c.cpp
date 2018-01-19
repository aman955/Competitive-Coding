# include <iostream>
# include <string>
# include <cstdio>
# include <vector>
# include <map>
# include <queue>
# include <limits>
# include <algorithm>
using namespace std;
struct Node
{
    Node (string str1, int dist1 = 0) {str = str1; dist = dist1;}
	string str;
	int dist;
};
map <string, map<string, int> > Map;
map <string, int> result;
vector <string> visited;
int main ()
{
	
	int total;
	cin >> total;
	while (total--)
	{
		string str1, str2, str3;
		cin >> str1 >> str2 >> str3;
		Map[str1][str2] = 1;
		Map[str1][str3] = 1;
		Map[str2][str1] = 1;
		Map[str2][str3] = 1;
		Map[str3][str1] = 1;
		Map[str3][str2] = 1;
		result [str1] = result [str2] = result [str3] = numeric_limits<int>::max();
	}
	queue <Node> Queue;
	map <string, int> root = Map ["Gattu"];
	
	for (map <string, int>::iterator it = root.begin(); it != root.end(); it++)
	{
		result[it->first] = 1;
		Queue.push (Node (it->first, 1));
	}
	while (Queue.empty() == false)
	{
		Node current = Queue.front();
	
		Queue.pop();
		if (find (visited.begin(), visited.end(), current.str) != visited.end())
			continue;
		for (map <string, int>::iterator it = Map[current.str].begin(); it != Map[current.str].end(); it++)
		{
				if (current.dist + 1 < result[it->first])
				{
					result[it->first] = current.dist + 1;
				}
				Queue.push (Node (it->first, min (result[it->first], current.dist + 1)));

		}
		visited.push_back (current.str);
	}
	for (map <string, int>::iterator it = result.begin(); it != result.end(); it++)	
	{
		if (it->second == numeric_limits<int>::max() && it->first != "Gattu")
			cout << it->first << " undefined" << endl;
		else
			if (it->first == "Gattu")
				cout << it->first << " 0" << endl;
			else
				cout << it->first << " " << it->second << endl;
	}
}
