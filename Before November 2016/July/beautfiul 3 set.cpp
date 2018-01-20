#include <bits/stdc++.h>

using namespace std;

void solve0(int n) {
    int m = n / 3;
    m += m;
    for (int i = 0; i <= m; i++) {
        int a = i;
        int b = (n / 3 + i) % (m + 1);
        int c = n - a - b;
        cout << a << " " << b << " " << c << endl;
    }
}

void solve1(int n) {
    int m = (n + 1) / 3;
    m += m;
    for (int i = 0; i < m; i++) {
        int a = i;
        int b = (n + 1) / 3 + 1 + i;
        b %= (m + 1);
        int c = n - a - b;
        cout << a << " " << b << " " << c << endl;
    }
}

int main() {
    int n = 0;
    cin >> n;
    int m = (n + n) / 3 + 1;
    cout << m << endl;
    if (n % 3 == 0)
        solve0(n);
    if (n % 3 == 1)
        solve0(n);
    if (n % 3 == 2)
        solve1(n);
    return 0;
}
