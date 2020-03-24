#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
typedef vector<int,vector<int>> vec;
typedef pair<int,int> P;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define all(vec) vec.begin(),vec.end()
#define mod 1000000007
const int INF = 1e9;

int main(){
  ll N; cin>>N;
  ll res=N;
  REP(i,0,N+1){
    ll cc=0,t=i;
    while(t>0){cc+=t%6;t/=6;}
    t=N-i;
    while(t>0){cc+=t%9;t/=9;}
    if(res>cc)res=cc;
  }
  print(res)
}
