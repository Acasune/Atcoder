#include<iostream>
#include<vector>
#include<queue>
#include <string.h>
#include <algorithm>

using namespace std;

int main(){
  int D;cin>>D;
  int C;cin>>C;
  int data[D][2];
  int ans=10000;
  for (int i = 0; i < D; i++) cin>>data[i][0]>>data[i][1];

  for (int bit = 0; bit < (1<<D); bit++) {
    int tmp_ans=0;
    int sum=0;
    for (int i = 0; i < D; i++) {
      if(bit&(1<<i)){
        sum+=(D-i)*100*data[D-i-1][0]+data[D-i-1][1];
        tmp_ans+=data[D-i-1][0];
      }
    }
    if(C<=sum){
      ans=min(ans,tmp_ans);
    }
    else if (sum<C){
      int search_i=0;
      while(true){
        if(!(bit&(1<<search_i))) break;
        search_i++;
      }
      for (int j = 0; j <data[D-search_i-1][0]; j++) {
        sum+=100*(D-search_i);
        tmp_ans++;
        if(C<=sum){
          ans=min(ans,tmp_ans);
          break;
        }
      }
    }
  }
  cout<< ans  << "\n";
}