#include <bits/stdc++.h>
//----***やべーやつら***----
using namespace std;
#define int long long

//----***型定義***----
using ll = long long;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;
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
#define MOD 1000000007;
#define INF 10*12;
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
  int N;
  string S;
  cin>>N>>S;
  vector<int> R_num(2*N,0),G_num(2*N,0),B_num(2*N,0);
  if(S.at(N-1)=='R')R_num[N-1]=1;
  if(S.at(N-1)=='G')G_num[N-1]=1;
  if(S.at(N-1)=='B')B_num[N-1]=1;
  for(int i=N-1;0<=i;i--){
    if(S.at(i)=='R'){
      R_num[i]=R_num[i+1]+1;
    }
    else{
      R_num[i]=R_num[i+1];
    }
    if(S.at(i)=='G'){
      G_num[i]=G_num[i+1]+1;
    }
    else{
      G_num[i]=G_num[i+1];
    }
    if(S.at(i)=='B'){
      B_num[i]=B_num[i+1]+1;
    }
    else{
      B_num[i]=B_num[i+1];
    }
  }
  int ans=0;
  char target;
  for(int i=0;i<N-2;i++)for(int j=i+1;j<N-1;j++){
    if(S.at(i)==S.at(j))continue;
    if (S.at(i)=='R'&&S.at(j)=='B'){target='G';}
    else if(S.at(i)=='B'&&S.at(j)=='R'){target='G';}
    else if(S.at(i)=='R'&&S.at(j)=='G'){target='B';}
    else if(S.at(i)=='G'&&S.at(j)=='R'){target='B';}
    else if(S.at(i)=='G'&&S.at(j)=='B'){target='R';}
    else if(S.at(i)=='B'&&S.at(j)=='G'){target='R';}

    if(target=='R'){
      ans+=R_num[j+1];
    }
    if(target=='B'){
      ans+=B_num[j+1];
    }
    if(target=='G'){
      ans+=G_num[j+1];
    }
    if(2*j-i<N&&S.at(2*j-i)==target){
      ans--;
    }
  }

  cout<<ans<<"\n";

}
