﻿#include <bits/stdc++.h>
//----***やべーやつら***----
using namespace std;
#define int long long

//----***型定義***----
using ll = long long;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;
typedef long double lb;
typedef long double ld;
typedef pair<int,int> P;

//----***Like a Pythonista***----
#define REP(ii,jj,nn) for (ll ii=jj;ii<(nn);ii++)
#define RREP(ii,nn,jj) for (ll ii = nn; jj<ii;ii--)
#define each(i,...) for (auto&& i:__VA_ARGS__)
#define ALL(vec) (vec).begin(),(vec).end()
#define sum(...) accumulate(ALL(__VA_ARGS__),0LL)
#define dsum(...) accumulate(ALL(__VA_ARGS__),0.0L)
#define vec(type,name,...) vector<type> name(__VA_ARGS__)
template<class T> inline auto max(const T& a){ return *max_element(ALL(a)); }
template<class T> inline auto min(const T& a){ return *min_element(ALL(a)); }
inline ll gcd(ll a, ll b){ while(b){ ll c = b; b = a % b; a = c; } return a; }
inline ll lcm(ll a, ll b){ if(!a || !b) return 0; return a * b / gcd(a, b); }

//----***定数***----
#define MOD 1e9+7;
#define INF 1e9;
#define EPS 1e-9;

//----***入出力***---
#define print(out) cout<< out  << "\n";
#define debug(var)  do{std::cerr << #var << " ↓ "<<"\n";view(var);}while(0);
#define debug2 cerr<<"🥺🥺🥺🥺🥺🥺"<<endl;
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

//----***初期時読み込み***----
struct initial{initial(){cin.tie(0); ios::sync_with_stdio(0); cout<<fixed<<setprecision(20);};}initial_;

signed main(){

  int N;cin>>N;
  vector<vector<int>> F(N,vector<int>(10)),P(N,vector<int>(11));
  REP(i,0,N)REP(j,0,10)cin>>F[i][j];
  REP(i,0,N)REP(j,0,11)cin>>P[i][j];
  int ans=-INF;

  for (int bit = 1; bit < 1024; ++bit) {
    vector<int> open(10,0),counts(N,0);
    for (int i = 0; i < 10; ++i) {
      if(bit&(1<<i)){
        REP(j,0,N){
          if(F[j][i]){
            counts[j]+=1;
          }
        }
      }
    }
    int tmp=0;
    REP(i,0,N){
      tmp+=P[i][counts[i]];
    }
    ans=max(ans,tmp);
  }
  print(ans)

}
