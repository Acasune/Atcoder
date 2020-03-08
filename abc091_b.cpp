#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;
typedef pair<ll,ll> P;

int main(){
  string sl[200];
  int N,M;
  map<string,int> mp;
  cin>>N;
  string s;
  REP(i,0,N){
    cin>>s;
    mp[s]++;
  }
  cin>>M;
  REP(i,N,N+M){
    cin>>s;
    mp[s]--;
  }
  int ans=0;
  for(auto m:mp){
    ans=max(ans,m.second);
  }
  print(ans);

}