#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double lb;
#define rep(i,j,n) for (int i = j; i < (n);i++)
#define print(out) cout<< out  << "\n";

int main(){
  int N;cin>>N;
  long long D;cin>>D;
  int n_two=0,n_three=0,n_five=0;

  while(D!=1){
    if(D%5==0){n_five++;D/=5;}
    else if(D%3==0){n_three++;D/=3;}
    else if(D%2==0){n_two++;D/=2;}
    else {cout<< 0 << "\n";return 0;}
  }
  vector<vector<vector<vector<long double> > > > dp(N+1, vector<vector<vector<long double>>>(n_two+1,vector<vector<long double>>(n_three+1, vector<long double>(n_five+1))));
  dp[0][0][0][0]=1;

  int d_2[]={0,1,0,2,0,1};
  int d_3[]={0,0,1,0,0,1};
  int d_5[]={0,0,0,0,1,0};

  rep(i,1,N+1){
    rep(j,0,n_two+1){
      rep(k,0,n_three+1){
        rep(l,0,n_five+1){
          rep(m,0,6){
            dp[i][min(n_two,j+d_2[m])][min(n_three,k+d_3[m])][min(n_five,l+d_5[m])]+=dp[i-1][j][k][l]/6.0;
          }
        }
      }
    }
  }
  cout<< setprecision(10)<<dp[N][n_two][n_three][n_five]  << "\n";
}