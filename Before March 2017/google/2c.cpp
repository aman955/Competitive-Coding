#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <memory.h>
#define N 411111
using namespace std;

int n,a[N],f[N],pr[N],ans;

int main(void){
    scanf("%d",&n);
    for (int i=1;i<=n;i++) scanf("%d",&a[i]);
    sort(a+1,a+n-1);
    memset(f,0,sizeof(f));
    ans=1;
    for (int i=1;i<=n;i++){    
        int x=a[i];

        for (int j=2;j<=(int)sqrt(a[i]);j++) if ((x%j)==0){
            while ((x%j)==0) x/=j;
            f[i]=max(f[pr[j]]+1,f[i]);
            pr[j]=i;
        }
        if (x>1) f[i]=max(f[pr[x]]+1,f[i]),pr[x]=i;
        if (f[i]>ans) ans=f[i];
    }
    cout << ans << endl;
    return 0;
}
