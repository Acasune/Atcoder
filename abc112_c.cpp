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

typedef tuple<ll, ll, ll> T;

int main(){
  int N,a,b,c;cin>>N;
  vector<ll> A[N],B[N],C[N];
  vector<T> vec,vec2;
  REP(i,0,N){
    cin>>a>>b>>c;
    T t=make_tuple(a,b,c);
    if(c>0){vec.emplace_back(t);}
    else{vec2.emplace_back(t);}
  }


  REP(i,0,101)REP(j,0,101){
    ll height=get<2>(vec[0])+abs(get<0>(vec[0])-i)+abs(get<1>(vec[0])-j);
    bool flg =true;
    REP(k,1,vec.size()){
      //print(height<<"?=?"<<get<2>(vec[k])+abs(get<0>(vec[k])-i)+abs(get<1>(vec[k])-j))
      if(height!=get<2>(vec[k])+abs(get<0>(vec[k])-i)+abs(get<1>(vec[k])-j)){
        flg=false;
      }
    }
    REP(k,0,vec2.size()){
      if(height>abs(get<0>(vec2[k])-i)+abs(get<1>(vec2[k])-j)){
        flg=false;
      }
    }
    if(!flg)continue;
    else{
      print(i<<" "<<j<<" "<<height)
      return 0;
    }
  }

  print(get<0>(vec[0])<<" "<<get<1>(vec[0])<<" "<<get<1>(vec[0]))
  return 0;

}
