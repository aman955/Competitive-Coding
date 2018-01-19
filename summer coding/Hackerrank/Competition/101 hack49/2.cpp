#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x1,y1,x2,y2,xc,yc;
	cin>>x1>>y1>>x2>>y2>>xc>>yc;
	
	int width=min(abs(x1-xc),abs(x2-xc));
    int height=min(abs(y1-yc),abs(y2-yc));
    long long points= (height*width)+ (height+1)*(width+1)-1;
    cout<<points;
    
}
