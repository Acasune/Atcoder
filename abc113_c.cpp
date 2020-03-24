#include <bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef long double lb;
typedef tuple<ll, ll, ll> T;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define all(vec) vec.begin(),vec.end()
#define mod 1000000007
const int INF = 1e9;

int main(){
  ll N,M,p,y;cin>>N>>M;
  T t;
  vector<T> vec_t(M);
  REP(i,0,M){
    cin>>p>>y;
    t=make_tuple(i,--p,y);
    vec_t[i]=t;
  }
  sort(all(vec_t),[](const T &a,const T &b){
    if(get<1>(a)!=get<1>(b))return get<1>(a) < get<1>(b);
    else return get<2>(a) <= get<2>(b);
  });

  ll before_p=0,now_p=0,idx=0;
  REP(i,0,M){
    now_p=get<1>(vec_t[i]);
    if(now_p==before_p){
      idx++;
    }
    else{
      idx=1;
      before_p=now_p;
    }
    get<2>(vec_t[i])=idx;
  }
  sort(all(vec_t));

  REP(i,0,M){
    printf("%06lld",get<1>(vec_t[i])+1);
    printf("%06lld",get<2>(vec_t[i]));
    printf("\n");
  }
  return 0;


}
