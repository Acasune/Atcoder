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
  vector<vector<int>> vec(3,vector<int>(3));
  REP(i,0,3)REP(j,0,3)cin>>vec[i][j];
  bool flg=true;
  if((vec[0][0]-vec[1][0]!=vec[0][1]-vec[1][1])||(vec[0][1]-vec[1][1]!=vec[0][2]-vec[1][2]))flg=false;
  if((vec[1][0]-vec[2][0]!=vec[1][1]-vec[2][1])||(vec[1][1]-vec[2][1]!=vec[1][2]-vec[2][2]))flg=false;
  if((vec[2][0]-vec[0][0]!=vec[2][1]-vec[0][1])||(vec[2][1]-vec[0][1]!=vec[2][2]-vec[0][2]))flg=false;

  if((vec[0][0]-vec[0][1]!=vec[1][0]-vec[1][1])||(vec[1][0]-vec[1][1]!=vec[2][0]-vec[2][1]))flg=false;
  if((vec[0][1]-vec[0][2]!=vec[1][1]-vec[1][2])||(vec[1][1]-vec[1][2]!=vec[2][1]-vec[2][2]))flg=false;
  if((vec[0][2]-vec[0][0]!=vec[1][2]-vec[1][0])||(vec[1][2]-vec[1][0]!=vec[2][2]-vec[2][0]))flg=false;

  if(flg)print("Yes")
  else print("No")

}
