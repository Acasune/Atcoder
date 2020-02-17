#include <bits/stdc++.h>

using namespace std;

int main(){
  int N; cin>>N;
  int a_l[N];
  for (int i = 0; i < N; i++) {
    cin>>a_l[i];
  }
  bool flg=true;
  for (int i = 0; i < N; i++) {
    if(a_l[i]%2==0&&a_l[i]%3!=0&&a_l[i]%5!=0){
        flg=false;
    }
  }
  if(flg) cout<< "APPROVED"  << "\n";
  else cout<< "DENIED"  << "\n";
}