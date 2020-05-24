#include <bits/stdc++.h>
//----***やべーやつら***----
using namespace std;
#define int long long

//----***型定義***----
using ll = long long;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;
typedef long double lb;
typedef vector<int,vector<int>> vvec;
typedef long double ld;

//----***Like a Pythonista***----
#define REP(i,j,n) for (ll i=j;i<(n);i++)
#define RREP(i,n,j) for (ll i = n; j<i;i--)
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
const int MOD=1000000007;
#define INF 1e9;
#define EPS 1e-9;

//----***入出力***----
#define print(out) cout<< out  << "\n";
#define debug(var)  do{std::cerr << #var << " ↓ "<<"\n";view(var);}while(0)
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }
#define HERE  cout<<"Here"<<endl;

//----***初期時読み込み***----
struct initial{initial(){cin.tie(0); ios::sync_with_stdio(0); cout<<fixed<<setprecision(20);};}initial_;

signed main(){
  int N,K;cin>>N>>K;
  string S;cin>>S;
  int ans=0;
  REP(i,1,S.size()){
    if(S.at(i)==S.at(i-1)){ans++;}
  }
  int cnt=0,left=0,right=S.size()-1;
  while(cnt<K&&left<right){
    int bf_l=left,bf_r=right;
    while(left<right){
      left++;
      if(S.at(bf_l)!=S.at(left)){
        break;
      }
      bf_l=left;
    }
    while(left<right){
      right--;
      if(S.at(bf_r)!=S.at(right)){
        break;
      }
      bf_r=right;
    }
    if(right>left)ans+=2;
    if(left!=0&&right!=S.size()-1&&right==left&&S.at(left-1)!=S.at(right)&&S.at(left)!=S.at(right+1)) ans+=2;
    cnt++;
    if(right<=left)break;
  }
  ans=ans;
  // if(right<=left){
  //   debug(cnt);
  //   debug(right);
  //   debug(left);
  // }
  if(cnt-1<K&&right<=left&&left>0&&right<S.size()-1&&(right!=0)&&left!=S.size()-1&&(S.at(0)!=S.at(S.size()-1))){
    ans++;
  }
  print(ans)


}
