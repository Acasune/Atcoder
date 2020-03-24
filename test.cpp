#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
typedef vector<int,vector<int>> vec;
typedef pair<int,int> P;
typedef long double ld;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n,j) for (int i = n; j<i;i--)
#define print(out) cout<< out  << "\n";
#define all(vec) vec.begin(),vec.end()
#define mod 1000000007
const int INF = 1e9;

ll mod_pow(ll x,ll n,ll m){
    if(n==0) return 1;
    ll res=mod_pow(x*x%m,n/2,m);
    //cout<<n<<"-"<<res<<"-"<<res*x<<"\n";
    if(n&1) {//cout<<x<<"-"<<res*x<<"\n";
      //cout<<n<<"-"<<res<<"-"<<res*x<<"\n";
      res=res*x%m;
    }
    //print(n)
    return res;
}
int main(){
    ll test=mod_pow(5,3,13);
    print(test);
}
