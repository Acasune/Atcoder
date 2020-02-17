#include <bits/stdc++.h>

using namespace std;

int main(){
  int N,K;cin>>N>>K;
  int a_l[N];
  int n_m=0,n_p=0;
  for (int i = 0; i < N; i++) {
    cin>>a_l[i];
    if(a_l[i]>=0)n_p++;
    else n_m++;
  }
  sort(a_l,a_l+N);
  vector<long long> ans;
  if(n_p*n_m>K){
    for (int i = 0; i < n_p; i++){
      for (int j = n_m+1; j < n_p; j++){
        ans.push_back(a_l[i]*a_l[j]);
      }
    }
    sort(ans.begin(),ans.end());
    cout<< ans[K-1]  << "\n";
  }
  else
  for (int i = 0; i < ; i++)
  {
    /* code */
  }
  

    
}




  long long index=0;
  for (int i = 0; i < N; i++) {
    for (int j = i+1; j < N; j++) {
      ans[index]=a_l[i]*a_l[j];
      index++;
    }
  }
  sort(ans.begin(),ans.end());
  cout<< ans[K-1]  << "\n";
  //cout<< index  << "\n";

}

