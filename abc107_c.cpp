#include <bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef long double lb;
typedef vector<int,vector<int>> vec;
typedef pair<int,int> P;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define all(vec) vec.begin(),vec.end()
#define mod 1000000007
const int INF = 1e9;

int main(){
  ll N,K,a;cin>>N>>K;
  vector<ll> neg_v{0},pos_v{0};
  REP(i,0,N){
    cin>>a;
    if(a<0){neg_v.emplace_back(-a);}
    else {pos_v.emplace_back(a);}
  }
  sort(all(neg_v));sort(all(pos_v));

  ll i=min(K,(ll)neg_v.size()-1),j=K-i;
  ll ans=1000000007;
  // if(i==K){
  //   ans=min(ans,neg_v[K]);
  // }
  // if(i==1){
  //   ans=min(ans,pos_v[K]);
  // }
  while((0<=i)&&(j<=min(K,(ll)pos_v.size()-1))){
    ans=min(ans,2*min(neg_v[i],pos_v[j])+max(neg_v[i],pos_v[j]));
    i--;j++;
  }
  print(ans)

}
