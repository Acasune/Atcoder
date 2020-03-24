#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
typedef vector<int,vector<int>> vec;
typedef pair<int,int> P;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n,j) for (int i = n; j<i;i--)
#define print(out) cout<< out  << "\n";
#define all(vec) vec.begin(),vec.end()
#define mod 1000000007
const int INF = 1e9;

ll calcNumOfCombination(ll n, ll r){
    ll num = 1;
    for(ll i = 1; i <= r; i++){
        num = num * (n - i + 1) / i;
    }
    return num;
}

int main(){
  ll N,a;cin>>N;
  map<ll,ll>mp,mp1,mp2;
  vector<ll> vec(N);
   REP(i,0,N){
    cin>>a;
    mp[a]++;
    vec[i]=a;
  }

  for (const auto& m : mp){
      mp1[m.first]=(m.second>=2?calcNumOfCombination(m.second,2):0);
      mp2[m.first]=(m.second-1>=2?calcNumOfCombination(m.second-1,2):0);
  }
  ll sm=0;
    for (const auto& m : mp1){
      sm+=mp1[m.first];
    }

  REP(i,0,N){
    ll ans=sm+mp2[vec[i]]-mp1[vec[i]];
    print(ans)
  }
}
