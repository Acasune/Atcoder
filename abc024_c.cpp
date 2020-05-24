#include <bits/stdc++.h>
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
#define dsum(...) accumulate(ALL(__VA_ARGS__),0.0L)
#define vec(type,name,...) vector<type> name(__VA_ARGS__)
template<class T> inline auto max(const T& a){ return *max_element(ALL(a)); }
template<class T> inline auto min(const T& a){ return *min_element(ALL(a)); }
inline ll gcd(ll a,ll b){if(b == 0) return a;return  gcd(b,a%b);}
inline ll lcm(ll a,ll b){ll g = gcd(a,b);return a / g * b;}

//----***定数***----
#define MOD 1000000007
#define INF 10*10
#define EPS 1e-9

//----***パーツ***----
#define fr first
#define se second

//----***入出力***---
#define print(out) cout<< out  << "\n";
#define debug(var)  do{std::cerr << #var << " ↓ "<<"\n";view(var);}while(0);
#define dbg cerr<<"🥺🥺🥺🥺🥺🥺"<<endl;
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

//----***初期時読み込み***----
struct initial{initial(){cin.tie(0); ios::sync_with_stdio(0); cout<<fixed<<setprecision(20);};}initial_;

vector<tuple<int, int, int>> vc;

signed main(){
  int N,D,K,s,t;cin>>N>>D>>K;
  vector<tuple<int, int, int>> vc(D);
  int L(D), R(D),S(K),T(K);
  REP(i,0,D){
    cin>>get<1>(vc[i])>>get<2>(vc[i]);
    get<0>(vc[i])=i+1;
  }
  // vector<tuple<int, int, int>> r_vc=vc;
  // sort(ALL(vc),[](auto a,auto b){
  //   if(get<2>(a)!=get<2>(b))return get<2>(a) < get<2>(b);
  //   else return get<1>(a) < get<1>(b);
  // });
  // sort(ALL(r_vc),[](auto a,auto b){
  //   if(get<1>(a)!=get<1>(b))return get<1>(a) > get<1>(b);
  //   else return get<2>(a) > get<2>(b);
  // });
  
  // REP(i,0,D){
  //   print((get<2>(vc[i])))
  // }
  REP(i,0,K){
    cin>>s>>t;
    int now=0;
    bool flg=(s<t?true:false);
    if(flg){
      REP(i,0,D){
        if(get<1>(vc[i])<=s && s<=get<2>(vc[i])){
          s=get<2>(vc[i]);
          if(t<=s){
            now=i+1;
            break;
          }
        }
      }
    }
    else{
      REP(i,0,D){
        if(get<1>(vc[i])<=s && s<=get<2>(vc[i])){
          s=get<1>(vc[i]);
          if(s<=t){
            now=i+1;
            break;
          }
        }
      }
    }
    print(now)
  }
}
