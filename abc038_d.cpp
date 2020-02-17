/*
参考 : https://atcoder.jp/contests/abc038/submissions/9593511
*/
#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> P;

int main(){
  int N;cin>>N;
  vector<P> p_l(N);
  for (int i = 0; i < N; i++) {
    int y,x;cin>>y>>x;
    p_l[i].first=y;
    p_l[i].second=x;
  }
  sort(p_l.begin(),p_l.end(),[](P x,P y){
    if (x.first!=y.first)return x<y;
    else return x.second>y.second;
  });
  constexpr int INF = 1e9 + 6;
  vector<int> dp(N+1,INF);
  for(int i=0;i<N;i++){
    *lower_bound(dp.begin(),dp.end(),p_l[i].second)=p_l[i].second;
  }
  cout<<lower_bound(dp.begin(),dp.end(),INF)-dp.begin()<<"\n";
}
