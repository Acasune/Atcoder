#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
typedef vector<int,vector<int>> vec;
typedef pair<int,int> P;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n,j) for (int i = n; j<i;i--)
#define print(out) cout<< out  << "\n";
#define all(vec) vec.begin(),vec.end()
#define mod 1000000007
const int INF = 1e9;

int main(){
  int N;cin>>N;
  vector<P> vec(N);
  vector<int> ans(N);
  REP(i,0,N){
    cin>>vec[i].first;
    vec[i].second=i;
  }
  sort(all(vec));
  int left_mid = vec[N/2-1].first;
  int right_mid = vec[N/2].first;
  REP(i,0,N/2){
    ans[vec[i].second] = right_mid;
  }
  REP(i,N/2,N){
    ans[vec[i].second] = left_mid;
  }
  for_each(all(ans),[](int a){print(a)});

}
