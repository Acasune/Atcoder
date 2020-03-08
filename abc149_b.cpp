#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll A,B,K;cin>>A>>B>>K;
  if(A-K>=0)cout<<A-K<<" "<<B<<"\n";
  else cout<<0<<" "<<(max((ll)0,B+A-K))<<"\n";
}
