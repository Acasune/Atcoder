#include<iostream>
#include<vector>
#include<queue>
#include <string.h>
#include <algorithm>

using namespace std;

int main(){
  int N;cin>>N;
  int t[N];for(int i=0;i<N;i++)cin>>t[i];
  int ans=50*4+1;
  for (int bit = 0; bit <(1<<N); bit++) {
    int p_1=0,p_2=0;
    for (int i = 0; i < N; i++) {
      if(bit&(1<<i))p_1+=t[i];
      else p_2+=t[i];
    }
    ans=min(max(p_1,p_2),ans);
  }
  cout<< ans  << "\n";
}