#include <cstdio>
#include <utility>
#define x first
#define y second
#define ll long long
struct S{std::pair<ll, ll> A, B;};
void f(ll a, ll b, ll c, ll d) {
	if (a < b) std::swap(a, b);
	if (c < d) std::swap(c, d);
	if (a >= c && b <= c || a < c && d <= a) printf("yes\n");
	else printf("no\n");
}
int main()
 {
	int T;
	S K, L;
	scanf("%d", &T);
	for (int i = 0; i < T; ++i) {
		scanf("%lld %lld %lld %lld %lld %lld %lld %lld", &K.A.x, &K.A.y, &K.B.x, &K.B.y, &L.A.x, &L.A.y, &L.B.x, &L.B.y);
		if (K.A == L.A || K.A == L.B || K.B == L.A || K.B == L.B) 
			printf("yes\n"); 	
		else if (K.A.x == L.A.x && K.A.x == K.B.x && K.B.x == L.B.x) 
			f(K.A.y, K.B.y, L.A.y, L.B.y);
		else if (K.A.y== L.A.y && K.A.y == K.B.y && K.B.y == L.B.y) 
			f(K.A.x, K.B.x, L.A.x, L.B.x);		
		else 
			printf("no\n");
	}
	return 0;
} 
