#include<iostream>
#include<vector>
#include<queue>
#include <string.h>
#include <algorithm>

using namespace std;

int main(){
  int N;cin>> N;
  int K;cin>> K;
  int I[K][4];
  for (int i = 0; i < K; i++) {
    for (int j=0; j < 4; j++) {
      I[i][j]=0;
    }
  }
  for (int i = 0; i < K; i++) {
    cin>>I[i][0];
    if(I[i][0]==0){cin>>I[i][1]>>I[i][2];I[i][3]=0;}
    else cin>>I[i][1]>>I[i][2]>>I[i][3];
  }
  int INF=999999999;
  for (int k = 0; k < K; k++) {
    if(I[k][0]==0){
      int D[N+1];
      fill(D,D+N+1,INF);
      D[I[k][1]]=0;
      while(true){
       bool update=false;
        for (int i = 0; i < k; i++){
          if(I[i][0]==1){
            if(D[I[i][1]]!=INF && D[I[i][2]]>D[I[i][1]]+I[i][3]){
              D[I[i][2]]=D[I[i][1]]+I[i][3];
              update =true;
            }
            if(D[I[i][2]]!=INF && D[I[i][1]]>D[I[i][2]]+I[i][3]){
              D[I[i][1]]=D[I[i][2]]+I[i][3];
              update =true;
            }
          }
        }
        if(!update)break;
      }
      if(D[I[k][2]]!=INF)cout<< D[I[k][2]]  << "\n";
      else cout<< "-1"  << "\n";
    }
  }
}