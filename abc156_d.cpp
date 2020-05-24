#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
#define int long long
#define mod 1000000007
using namespace std;
typedef pair<int, int>P;


int kai(int x, int y) {
	int res = 1;
	for (int i = x - y + 1; i <= x; i++) {
		res *= i; res %= mod;
	}
	return res;
}
int mod_pow(int x, int y, int m) {
	int res = 1;
	while (y) {
		if (y & 1) {
			res = res * x % m;
		}
		x = x * x % m;
		y >>= 1;
	}
	return res;
}
int comb(int x, int y) {
	if (y > x)return 0;
	return kai(x, y) * mod_pow(kai(y, y), mod - 2, mod) % mod;
}
void debug_out() { cerr << endl; }
 
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
	cerr << " " << to_string(H);
	debug_out(T...);
}
 
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)

int n, a, b;
signed main() {
	cin >> n >> a >> b;
	int p = (mod_pow(2, n, mod) - 1 + mod) % mod;
	int q = (comb(n, a) + comb(n, b)) % mod;
	cout << (p - q + mod) % mod << endl;
}
