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

int main(){
  ll N;string S;cin>>N>>S;
  vector<ll> left_v(N,0), right_v(N,0);
  if(S.at(0)!='E')left_v[0]=1;
  if(S.at(N-1)!='W')right_v[N-1]=1;
  REP(i,1,N){
    if(S.at(i)!='E')left_v[i]=left_v[i-1]+1;
    else left_v[i]=left_v[i-1];
  }
  RREP(i,N-2,-1){
    if(S.at(i)!='W')right_v[i]=right_v[i+1]+1;
    else right_v[i]=right_v[i+1];
  }
  ll ans=min(left_v[N-1],right_v[0]);
  REP(i,1,N-1){
    ans=min(ans,left_v[i-1]+right_v[i+1]);
    
  }
  print(ans)
}
