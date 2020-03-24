#include <bits/stdc++.h>
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
  int N,K,idx,a;cin>>N>>K;
  vector<int> vec(N);
  REP(i,0,N){
    cin>>a;
    if(a==1){idx=i;}
    vec[i]=a;
  }
  ll ans;
  if(idx<K-1){
    ans=1+max(0LL,(ll)ceil(1.*(N-K)/(K-1)));
  }
  else{
    ans=max((ll)ceil(1.*idx/(K-1)),(ll)ceil(1.*idx/(K-1)+1.*(N-1-idx)/(K-1)));
  }



  // if(idx<K-1){
  //   ans=1+max(0LL,(ll)ceil(1.*(N-K)/(K-1)));
  // }
  // else{
  //   ans=ceil(1.*idx/(K-1))+max(0LL,(ll)ceil(1.*(N-1-idx)/(K-1)));
  // }
  print(ans)

}
