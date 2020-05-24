#include <bits/stdc++.h>
//----***やべーやつら***----
using namespace std;
#define int long long

//----***型定義***----
using ll = long long;
using pll = pair<ll, ll>;
using pdd = pair<double, double>;
typedef long double lb;
// typedef vector<int,vector<int>> vvec;
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
// inline ll gcd(ll a, ll b){ while(b){ ll c = b; b = a % b; a = c; } return a; }
// inline ll lcm(ll a, ll b){ if(!a || !b) return 0; return a * b / gcd(a, b); }

//----***定数***----
const int MOD=1e9+7;
#define INF 1e9;
#define EPS 1e-9;

//----***入出力***---
#define print(out) cout<< out  << "\n";
#define debug(var)  do{std::cerr << #var << " ↓ "<<"\n";view(var);}while(0)
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }
#define here  cout<<"Here"<<endl;


//----***初期時読み込み***----
struct initial{initial(){cin.tie(0); ios::sync_with_stdio(0); cout<<fixed<<setprecision(20);};}initial_;

int K;
set<int> st{1,2,3,4,5,6,7,8,9};
int ue;

void dfs(int i){
  if(st.count(i))return;
  st.insert(i);
  if(st.size()>K){return;}
  int tmp_i=i%=10;
  if(tmp_i>0){
    dfs(10*i+tmp_i-1);
  }
  dfs((10*i+tmp_i));
  if(tmp_i!=9){
    dfs(10*i+1);
  }

}

signed main(){
  cin>>K;
  queue<int> que;
  each(s,st){
    que.push(s);
  }
  while(st.size()<=K){
    int target =que.front();que.pop();
    int i=target%10;
    if(i>0){
      st.insert(10*target+(i-1));
      que.push(10*target+(i-1));
    }
    st.insert(10*target+i);
    que.push(10*target+(i));
    if(i!=9){
      st.insert(10*target+(i+1));
      que.push(10*target+(i+1));
    }
    if(st.size()>K)break;
  }
  int ans,idx=0;
  each(s,st){
    //debug(s);
    if(idx==K-1){
      ans=s;
      break;
    }
    idx++;
  }
  //if(st.count(3234566667)){here}
  print(ans)
}
