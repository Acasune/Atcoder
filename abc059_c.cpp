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
inline ll gcd(ll a,ll b){if(b == 0) return a;return  gcd(b,a%b);}
inline ll lcm(ll a,ll b){ll g = gcd(a,b);return a / g * b;}

//----***定数***----
#define MOD 1e9+7;
#define INF 1e9;
#define EPS 1e-9;

//----***入出力***---
#define print(out) cout<< out  << "\n";
#define debug(var)  do{std::cerr << #var << " ↓ "<<"\n";view(var);}while(0);
#define dbg cerr<<"🥺🥺🥺🥺🥺🥺"<<endl;
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

//----***初期時読み込み***----
struct initial{initial(){cin.tie(0); ios::sync_with_stdio(0); cout<<fixed<<setprecision(20);};}initial_;


signed main(){
  int N;cin>>N;
  vector<int> A(N);
  REP(i,0,N)cin>>A[i];

  int ans,cnt=0;
  vector<int> tmp_A=A;
  // case 偶数が正
  for(int i=0;i<N;i++){
    if(i%2==0&&A[i]<=0){
      cnt+=-(tmp_A[i]-1);
      tmp_A[i]=1;
    }
    if(i%2==1&&A[i]>=0){
      cnt+=tmp_A[i]+1;
      tmp_A[i]=-1;
    }
  }
  int S=tmp_A[0];
  // debug(tmp_A)
  REP(i,1,N){
    if((S+tmp_A[i])*S>=0){
      cnt+=abs(S+tmp_A[i])+1;
      S=(tmp_A[i]<0?-1:1);
    }
    else{
      S+=tmp_A[i];
    }
  }
  ans=cnt;
  // case 偶数が負
  cnt=0;tmp_A=A;
  for(int i=0;i<N;i++){
    if(i%2==1&&A[i]<=0){
      cnt+=-(tmp_A[i]-1);
      tmp_A[i]=1;
    }
    if(i%2==0&&A[i]>=0){
      cnt+=tmp_A[i]+1;
      tmp_A[i]=-1;
    }
  }
  // debug(tmp_A)
  // debug(cnt)
  S=tmp_A[0];
  REP(i,1,N){
    if((S+tmp_A[i])*S>=0){
      // debug(i)debug(S)
      cnt+=abs(S+tmp_A[i])+1;
      S=(tmp_A[i]<0?-1:1);
      // debug(cnt)
    }
    else{
      S+=tmp_A[i];
    }
  }
  ans=min(ans,cnt);
  print(ans)



}