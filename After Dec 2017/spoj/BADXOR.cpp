#include <iostream>
#include <cstdio>

using namespace std;

const int MAX = 1025;
const int MODULO = 100000007;

int T, N, M;
int dp[MAX][MAX], a[MAX], b[MAX], active[MAX];

int main() {
    cin >> T;
    for (int c = 0; c < T; c ++) {
        cin >> N >> M;
        for (int i = 1; i <= N; i ++) {
            cin >> a[i];
        }
        for (int i = 1; i <= M; i ++) {
            cin >> b[i];
        }
        fill(active, active + MAX, 0);
        dp[0][0] = 1;
        for (int i = 1; i <= N; i ++) {
            for (int j = 0; j < MAX; j ++) {
                dp[i][j] = (dp[i - 1][j] + dp[i - 1][j ^ a[i]]) % MODULO;
            }
        }
        for (int i = 1; i <= M; i ++) {
            active[b[i]] = 1;
        }
        int bad = 0;
        for (int i = 0; i < MAX; i ++) {
            if (active[i]) {
                bad = (bad + dp[N][i]) % MODULO;
            }
        }
        int all = 1;
        for (int i = 1; i <= N; i ++) {
            all = (all << 1) % MODULO;
        }
        cout << "Case " << c + 1 << ": " << (all - bad + MODULO) % MODULO << endl;
    }
 
    return 0;
}

