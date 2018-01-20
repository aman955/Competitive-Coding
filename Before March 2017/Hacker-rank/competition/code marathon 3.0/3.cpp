    #include <algorithm>
    #include <bitset>
    #include <climits>
    #include <cmath>
    #include <cstdio>
    #include <cstring>
    #include <ctime>
    #include <deque>
    #include <functional>
    #include <iomanip>
    #include <iostream>
    #include <list>
    #include <map>
    #include <queue>
    #include <set>
    #include <sstream>
    #include <stack>
    #include <string>
    #include <vector>
     
    using namespace std;
     
    #define FOR(i, N) for(int i = 0; i < N; i++)
    #define FOR1e(i, N) for(int i = 1; i <= N; i++)
    #define REP(i, M, N) for(int i = M; i < N; i++)
    #define REPe(i, M, N) for(int i = M; i <= N; i++)
    #define sc(N) scanf("%d", &N)
    #define scsc(M, N) scanf("%d %d", &M, &N)
    #define scscsc(M, N, O) scanf("%d %d %d", &M, &N, &O)
    #define all(s) s.begin(), s.end()
    #define gt(s) getline(cin, s)
    #define ms(a, v) memset(a, v, sizeof a)
    #define mp make_pair
    #define pb push_back
    #define pq priority_queue
    #define ss stringstream
     
    typedef long long ll;
    typedef pair<int, int> pii;
    typedef vector<int> vi;
     
    const int oo = 1 << 30;
    const int MAX = 1e4 + 1;
    const int mod = 1e9 + 7;
     
    int dr[] = { 0, -1, 0, 1 };
    int dc[] = { 1, 0, -1, 0 };
     
    inline int Pow(int b, int p) { if (!p) return 1; int sq = Pow(b, p >> 1); sq *= sq; if (p & 1) sq *= b; return sq; }
    inline int gcd(int a, int b) { if (!a) return b; return gcd(b % a, a); }
    inline string toString(int x) { ss SS; SS << x; return SS.str(); }
     
    vi adj[2 * MAX];
    bool vis[2 * MAX];
     
    int bfs(int src, int des){
    	if (src == des)
    		return 0;
    	queue <int> q; q.push(src);
    	int cur = src, sz = 1;
    	int moves = 1;
    	while (q.size()){
    		while (sz--){
    			cur = q.front(); 
    			q.pop();
    			FOR(i, adj[cur].size()){
    				int child = adj[cur][i];
    				if (child == des)
    					return moves;
    				if (!vis[child]){
    					vis[child] = 1;
    					q.push(child);
    				}
    			}
    		}
    		moves++;
    		sz = q.size();
    	}
    	return oo;
    }
     
    void pre_processing(){
    	FOR(i, 2 * MAX)
    		adj[i].clear();
    	ms(vis, 0);
    	REP(i, 1, 2 * MAX){
    		adj[i].push_back(2 * i);
    		adj[i].push_back(i - 1);
    	}
    }
     
    int main(){
    #ifndef ONLINE_JUDGE
    	freopen("in.txt", "r", stdin);
    #endif
    	pre_processing();
    	int n, m;
    	while (cin >> n >> m){
    		cout << bfs(n, m) << endl;
    	}
    	return 0;
    }
    
