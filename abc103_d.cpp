#include<iostream>
#include<vector>
#include<queue>
#include<string.h>
#include<algorithm>
#include<stack>
#include<set>

using namespace std;
typedef pair<int, int> P;

int main(){
  int N,M;cin>>N>>M;
  P req[M];
  for (int m = 0; m < M; m++) {
    cin>>req[m].first>>req[m].second;
    req[m].first--;req[m].second--;
  }
  sort(req,req+M);
  int start=req[0].first, end=req[0].second;
  int ans=1;
  for (int m = 1; m < M; m++) {
    if(req[m].second<end){
      end=req[m].second;
    }
    if(end<=req[m].first){
      ans++;
      end=req[m].second;
    }
  }
  cout<< ans  << "\n";
}