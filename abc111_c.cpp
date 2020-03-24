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
  int N,a,b;cin>>N;
  map<int, int>mp0,mp1;
  REP(i,0,N/2){
    cin>>a>>b;
    mp0[a]++;mp1[b]++;
  }
  vector<P> vec0,vec1;
  for(auto mp : mp0)(vec0.push_back({mp.second,mp.first}));
  for(auto mp : mp1)(vec1.push_back({mp.second,mp.first}));
  sort(all(vec0),greater<>());sort(all(vec1),greater<>());
  //print(vec0[0].first<<vec1[0].first)
  if(vec0[0].second!=vec1[0].second){
    print(N-vec0[0].first-vec1[0].first)
  }
  else {
    int v0,v1,v2=0,v3=0;
    v0=vec0[0].first;
    v1=vec1[0].first;
    if(vec0.size()>1)v2 = vec0[1].first;
    if(vec1.size()>1)v3 = vec1[1].first;
    print(N-max(v0+v3,v1+v2))

  }

}
