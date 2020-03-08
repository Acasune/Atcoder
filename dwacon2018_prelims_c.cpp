#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
const int INF = 1e9;
const int MOD = (int)1e9 + 7;
typedef pair<ll,ll> P;

vector<vector<int>> partition(int n,int r){
    vector<vector<int>> P(n+1,vector<int>(r+1,0));
    REP(j,0,r+1) P[0][j]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=r;j++){
            P[i][j] = P[i][j-1];
            if (i-j>=0) P[i][j] += P[i-j][j];
            P[i][j]%=MOD;
        }
    }
    return P;
}

int main(){
  int N,M;cin>>N>>M;
  int a_l[N],b_l[M];
  int a_dth=0,b_dth=0;
  REP(i,0,N){
    cin>>a_l[i];
    b_dth+=a_l[i];
  }
  REP(i,0,M){
    cin>>b_l[i];
    a_dth+=b_l[i];
  }
  vector<int> a_grouped,b_grouped;
  int before=-1;
  for(auto a: a_l){
    if(a!=before)a_grouped.emplace_back(1);
    else a_grouped.back()+=1;
    before=a;
  }
  before=-1;
  for(auto b: b_l){
    if(b!=before)b_grouped.emplace_back(1);
    else b_grouped.back()+=1;
    before=b;
  }

  int ag_size=a_grouped.size(),bg_size=b_grouped.size();
  ll dp[max(ag_size,bg_size)+1][max(a_dth,b_dth)+1];

  auto partition_tableA = partition(a_dth,N);
  auto partition_tableB = partition(b_dth,M);

  memset(dp,0,sizeof(dp));
  dp[0][0]=1;

  REP(n,0,ag_size)REP(d,0,a_dth+1)REP(x,0,a_dth+1){
    if(d+x>a_dth)break;
      dp[n+1][d+x]+=dp[n][d]*partition_tableA[x][a_grouped[n]];
      dp[n+1][d+x]%=MOD;
  }
  ll ans=dp[ag_size][a_dth]%MOD;

  memset(dp,0,sizeof(dp));
  dp[0][0]=1;
  REP(n,0,bg_size)REP(d,0,b_dth+1)REP(x,0,b_dth+1){
    if(d+x>b_dth)break;
    else{
      dp[n+1][d+x]+=dp[n][d]*partition_tableB[x][b_grouped[n]];
      dp[n+1][d+x]%=MOD;
    }
  }

  ans = (ans*dp[bg_size][b_dth])%MOD;

  print(ans)
  //print(ans_b)

}