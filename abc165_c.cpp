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

int N,M,Q;
vector<int> A(55),B(55),C(55),D(55);

int dfs(vector<int> array){
  if(array.size()==N){
    int tmp=0;
    // debug(array)
    REP(q,0,Q){
      if(array[B[q]]-array[A[q]]==C[q]){
        tmp+=D[q];
      }
    }
    return tmp;
  }
  int ans=-1;
  REP(i,array[array.size()-1],M){
    vector<int> array1=array;
    array1.push_back(i);
    ans=max(ans,dfs(array1));
  }
  return ans;

}


signed main(){
  cin>>N>>M>>Q;
  REP(i,0,Q){
    cin>>A[i]>>B[i]>>C[i]>>D[i];
    A[i]--;B[i]--;
  }
  int ans=-1;
  REP(m,0,M){
    vector<int> arg={m};
    ans=max(ans,dfs(arg));
  }
  print(ans);



}
