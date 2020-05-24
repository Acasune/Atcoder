#include <bits/stdc++.h>
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
  int H,W;cin>>H>>W;
  if(H%3==0||W%3==0){
    print(0)
    return 0;
  }
  int ans=100000000000;
  int S1,S2,S3;
  REP(h,1,H){
    S1=h*W;
    S2=((H-h)/2)*W;
    // debug(S1)
    // debug(S2)
    ans=min(ans,max(abs(S1-S2),abs(2*S1-W*H+S2)));
    S2=(W/2)*(H-h);
    // debug(S2)
    ans=min(ans,max(abs(S1-S2),abs(2*S1-W*H+S2)));
  }
  REP(w,1,W){
    S1=w*H;
    S2=((W-w)/2)*H;
    ans=min(ans,max(abs(S1-S2),abs(2*S1-W*H+S2)));
    S2=(H/2)*(W-w);
    ans=min(ans,max(abs(S1-S2),abs(2*S1-W*H+S2)));
  }
  print(ans)


}
