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
  string S,T;cin>>S>>T;
  map<char,char> mp;
  REP(i,0,S.size()){
      if(mp.count(S.at(i))==0){
        mp[S.at(i)]=T.at(i);
      }
      else if(mp[S.at(i)]==T.at(i))continue;
      else{
        //print("here")
        print("No")
        return 0;
      }
  }
  swap(S,T);
  map<char,char> mp1;
  REP(i,0,S.size()){
      if(mp1.count(S.at(i))==0){
        mp1[S.at(i)]=T.at(i);
      }
      else if(mp1[S.at(i)]==T.at(i))continue;
      else{
        //print("here")
        print("No")
        return 0;
      }
    
  }
  print("Yes")
}
