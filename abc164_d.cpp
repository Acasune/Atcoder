﻿#include <bits/stdc++.h>
//----***やべーやつら***----
using namespace std;
#define int long long

//----***型定義***----
using ll = long long;
using P = pair<int,int>;

//----***Like a Pythonista***----
#define REP(ii,jj,nn) for (ll ii=jj;ii<(nn);ii++)
#define RREP(ii,nn,jj) for (ll ii = nn; jj<ii;ii--)
#define each(i,...) for (auto&& i:__VA_ARGS__)
#define ALL(vec) (vec).begin(),(vec).end()
#define sum(...) accumulate(ALL(__VA_ARGS__),0LL)
#define dsum(...) accumulate(ALL(__VA_ARGS__),0.0)
#define vec(type,name,...) vector<type> name(__VA_ARGS__)
template<class T> inline auto max(const T& a){ return *max_element(ALL(a)); }
template<class T> inline auto min(const T& a){ return *min_element(ALL(a)); }
inline ll gcd(ll a,ll b){if(b == 0) return a;return  gcd(b,a%b);}
inline ll lcm(ll a,ll b){ll g = gcd(a,b);return a / g * b;}

//----***定数***----
#define MOD 1000000007
#define INF 100000000000000000
#define EPS 1e-9
const vector<vector<int>> DXY={{-1,0},{1,0},{0,-1},{0,1}};

//----***パーツ***----
#define fr first
#define se second
#define pb push_back

//----***入出力***---
void print() { std::cout << "\n"; }
template <class T>void print(const T &x) {std::cout << x<<"\n";}
template <class T, class... Args>void print(const T &x, const Args &... args) {std::cout << x << " ";print(args...);}
#define debug(var)  do{std::cerr << #var << " ↓ "<<"\n";view(var);}while(0);
#define dbg cerr<<"🥺🥺🥺🥺🥺🥺"<<endl;
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

//----***初期時読み込み***----
struct initial{initial(){cin.tie(0); ios::sync_with_stdio(0); cout<<fixed<<setprecision(15);};}initial_;

signed main(){
  string S;
  cin>>S;
  reverse(ALL(S));
  map<int,int> mp;
  mp[0]=1;

  int now=0;int digit=1;
  each(s,S){
    now=(now +(s-'0') * digit)%2019;
    digit*=10;
    digit%=2019;
    mp[now]++;
  }
  int ans=0;
  each(m,mp){
    ans+=m.second*(m.second-1)/2;
  }
  print(ans);


}
