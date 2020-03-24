#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e8;
typedef pair<int,int> P;

ll fact(ll n) {
   if (n == 0 || n == 1)
      return 1;
   else
      return n * fact(n - 1);
}

int main(){
  ll N;cin>>N;
  string s;
  map<string,ll> mp;
  ll ans=0;
  REP(i,0,N){
    cin>>s;
    sort(s.begin(),s.end());
    if(mp.count(s)>0){ans+=mp[s];mp[s]++;}
    else mp[s]=1;
  }
  print(ans)
  return 0;

}
