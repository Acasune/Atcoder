#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lb;
#define REP(i,j,n) for (int i=j;i<(n);i++)
#define RREP(i,n) for (int i = n; 0<i;i--)
#define print(out) cout<< out  << "\n";
#define mod 1000000007
const int INF = 1e9;

int facctorialMethod(int k){
    int sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}

int main(){
  int N;cin>>N;
  vector<int> X(N),Y(N);
  double d_sum=0;
  REP(i,0,N)cin>>X[i]>>Y[i];
  vector<int> nums(N);
  iota(nums.begin(), nums.end(), 0);

  do{
      double d=0.0;
      REP(i,1,N){
        d=d+1.*sqrt(pow((X[nums[i-1]]-X[nums[i]]),2)+1.*pow((Y[nums[i-1]]-Y[nums[i]]),2));
      }
      d_sum+=d;
  } while (next_permutation(nums.begin(), nums.end()));

  print(setprecision(16)<<d_sum/(facctorialMethod(N)))
}
