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
#define MOD 1000000000+7;
#define INF 100000000000000000;
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
  int N,a,over=0;cin>>N;
  vector<int> ranks(8,0);
  REP(i,0,N){
    cin>>a;
    if(1<=a&&a<400)ranks[0]=1;
    if(400<=a&&a<800)ranks[1]=1;
    if(800<=a&&a<1200)ranks[2]=1;
    if(1200<=a&&a<1600)ranks[3]=1;
    if(1600<=a&&a<2000)ranks[4]=1;
    if(2000<=a&&a<2400)ranks[5]=1;
    if(2400<=a&&a<2800)ranks[6]=1;
    if(2800<=a&&a<3200)ranks[7]=1;
    if(3200<=a)over++;
  }
  int ans=0;
  REP(i,0,8){
    ans+=ranks[i];
  }
  int min_ans=max(ans,(int)1);
  int max_ans=ans+over;
  //int max_ans=min(ans+over,(int)8);

  cout<<min_ans<<" "<<max_ans<<"\n";

}
