#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
 int n;
 cin>>n;
 vector< pair<int,string> > vec;
 
 vec.push_back(make_pair(1,"aman"));
 vec.push_back(make_pair(3,"sakshi"));
 vec.push_back(make_pair(1,"rathore"));
 vec.push_back(make_pair(1,"amar"));
  sort(vec.begin(),vec.end());
 for(int i=0;i<vec.size();i++)
 {
 cout<<vec[i].first<<" "<<vec[i].second<<endl;	
 }

    
}
