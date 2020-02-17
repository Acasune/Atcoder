#include <bits/stdc++.h>

using namespace std;

int main(){
  int N;cin>>N;
  vector<string>  s_v(N);
  for (int i = 0; i < N; i++) {
    cin>>s_v[i];
  }

  sort(s_v.begin(),s_v.end());
  vector<string>  ans_s;
  int s_max=0;
  for (int i = 0; i < N;){
    int count=0;
    string str=s_v[i];
    while(str==s_v[i]){
      count++;
      i++;
      if(i==N){
        break;
      }
    }
    if(count>s_max){
      s_max=count;
      ans_s ={str};
      continue;
    }
    if(count==s_max){
      ans_s.push_back(str);
    }
  }
  for (int i = 0; i < ans_s.size(); i++)
  {
    cout<< ans_s[i]  << "\n";
  }

}