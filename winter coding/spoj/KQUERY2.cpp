#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
int a,b,c,d,e,f,g;
vector<int> tree[250000];
void query(int cvor,int from,int to,int a,int b)
{
     if(from>=a && to<=b)
     {

        int low=0;
        int midd=0;
        int high=tree[cvor].size()-1;
        while(low<=high)
        {
          midd=(low+high)/2;
          if(tree[cvor][midd]<=f)low=midd+1;
          else high=midd-1;
        }
        g+=(tree[cvor].size()-low);
 
        return;
     }
     if((from+to)/2>=a)query(cvor*2,from,(from+to)/2,a,b);
     if((from+to)/2+1<=b)query(cvor*2+1,(from+to)/2+1,to,a,b);
}
int main()
{
    scanf("%d",&a);
    for(b=1;b<a;b*=2){}
    for(int i=0;i<a;++i)
    {
      scanf("%d",&c);
      tree[i+b].push_back(c);
    }
    for(int i=a+b-1;i>1;--i)
    {
        for(int j=0;j<tree[i].size();++j)
		tree[i/2].push_back(tree[i][j]);
        if(i%2==0)
		sort(tree[i/2].begin(),tree[i/2].end());
    }
    scanf("%d",&c);
    for(int i=0;i<c;++i)
    {
            scanf("%d%d%d",&d,&e,&f);
            g=0;
            query(1,0,b-1,d-1,e-1);
            printf("%d\n",g);
    }
    return 0;
}
