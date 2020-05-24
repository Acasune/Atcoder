#include <bits/stdc++.h>
//----***やべーやつら***----
using namespace std;
#define int long long

//----***型定義***----
using ll = long long;
using pll = pair<ll, ll>;


//----***Like a Pythonista***----
#define REP(ii,jj,nn) for (ll ii=jj;ii<(nn);ii++)
#define RREP(ii,nn,jj) for (ll ii = nn; jj<ii;ii--)

//----***定数***----
#define MOD 1000000000+7;
#define INF 100000000000000000;
#define EPS 1e-9;
#define ALL(vec) (vec).begin(),(vec).end()
//----***入出力***---
#define print(out) cout<< out  << "\n";
#define debug(var)  do{std::cerr << #var << " ↓ "<<"\n";view(var);}while(0);
#define dbg cerr<<"🥺🥺🥺🥺🥺🥺"<<endl;
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }


signed main(){
  int N,a,ans=0,sum=0;
  cin>>N;
  vector<int> S(N,0);
  REP(i,0,N){
    cin>>a;
    S[i]=a;
    sum+=a;
  }
  if(sum%10==0){
    sort(ALL(S));
    int mini=10000+7;
    REP(i,0,N){
      if(S[i]%10!=0){
        mini=S[i];
        break;
      }
    }
    ans=max(sum-mini,(ll)0);
  }
  else{
    ans=sum;
  }

  print(ans)


}
