#include<iostream>
#include<vector>
#include<queue>
#include<string.h>
#include<algorithm>
#include<stack>
#include<set>
#include<functional>

using namespace std;

int main(){
  int N,K;cin>>N>>K;
  vector<string> s_l(N);
  vector<int> ord(N);
  for (int i = 0; i < N; i++){
    cin>>s_l[i];
    ord[i]=i;
  }
  set<string> ans_space;
  do{
    string element="";
    for (int k=0;k<K;k++) {
      element+=s_l[ord[k]];
    }
    ans_space.insert(element);
  }while(next_permutation(ord.begin(),ord.end()));

  cout<<ans_space.size()<<"\n";
}