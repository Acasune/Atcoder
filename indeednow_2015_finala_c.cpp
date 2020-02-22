#include<iostream>
#include<vector>
#include<queue>
#include <string.h>
#include <algorithm>

using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(I,J,N) for (int (I)=(J);(I)<(N);(I)++)
#define RREP(I,J,N) for (int (I) = (N); (J)<(I);(I)--)
#define print(out) cout<< out  << "\n";

int main(){
  int N,M,x,y,z,r;
  int dp[105][105][105];
  cin>>N>>M;
	while(N--){
    cin>>x>>y>>z>>r;
    dp[x][y][z]=max(dp[x][y][z],r);
  }
	REP(x,0,101){
    REP(y,0,101){
       REP(z,0,101){
         dp[x+1][y][z]=max(dp[x+1][y][z],dp[x][y][z]);
		     dp[x][y+1][z]=max(dp[x][y+1][z],dp[x][y][z]);
		     dp[x][y][z+1]=max(dp[x][y][z+1],dp[x][y][z]);
       }
    }
	}
	while(M--) cin>>x>>y>>z, cout<<dp[x][y][z]<<endl;

  REP(m,0,M){
    cin>>x>>y>>z;
    print(dp[x][y][z])
  }

}