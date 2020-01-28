#include<iostream>
#include <algorithm>
#include<vector>

using namespace std;

int main(){
  int N;
  cin >>N;
  int W[N];
  for (int index = 0; index < N; index++) cin>>W[index];

  int n_box=1;
  vector<int> NB={W[0]};
  for (int i=1; i < N; i++) {
    bool flg=false;
    int tmp=0;
    while(tmp<=n_box){
      if (NB[tmp]>=W[i]){
        NB[tmp]=W[i];
        sort(NB.begin(),NB.end());
        flg=true;
        break;
      }
      else{
        tmp++;
      }
    }
    if(!flg){
      NB.push_back(W[i]);
      sort(NB.begin(),NB.end());
      n_box++;
    }
  }
  cout<< n_box  << "\n";
}