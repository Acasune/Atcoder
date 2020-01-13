#include<iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  int T[N+1],X[N+1],Y[N+1];
  for(int i=0;i<N;i++){
    cin>> T[i] >> X[i] >> Y[i];
  }
  T[-1]=X[-1]=Y[-1]=0;
  bool flg=true;
  for(int i=0; i<N ;i++){
    int t=T[i]-T[i-1];
    int px=abs(X[i]-X[i-1]);
    int py=abs(Y[i]-Y[i-1]);
    if(t<px+py||(t-px-py)%2!=0)flg=false;
  }
  if(flg) cout << "Yes" <<"\n";
  else cout << "No" << "\n";
}