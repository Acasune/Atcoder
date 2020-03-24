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

int main(){
  int N,K,a;cin>>N>>K;
  map<int,int> mp;
  REP(i,0,N){
    cin>>a;
    mp[a]++;
  }
  int ans=0,idx=0;
  vector<int>vec(mp.size());
  for(auto m:mp){
    vec[idx]=m.second;
    idx++;
  }
  sort(all(vec));
  REP(i,0,max((int)vec.size()-K,0)){ans+=vec[i];}
  print(ans)

}
