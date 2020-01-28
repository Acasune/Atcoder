#include<iostream>
#include<string>
using namespace std;

int main(){
  string S;cin>>S;reverse(S.begin(),S.end());
  string T;cin>>T;reverse(T.begin(),T.end());
    if(S.size() < T.size()){
    cout << "UNRESTORABLE" << endl;
    return 0;
  }

  for (int s = 0; s <= S.size()-T.size(); s++) {
    string sbs = S.substr(s,T.size()+s);
    bool flg=true;
    for (int t = 0; t < T.size(); t++){
      if (!(sbs[t]==T[t]||sbs[t]=='?')){
        flg=false;
        break;
      }
    }
    if (flg){
      string ans=S.substr(0,s)+T+S.substr(T.size()+s,S.size());
      replace(ans.begin(),ans.end(),'?','a');
      reverse(ans.begin(),ans.end());
      cout<< ans  << "\n";return 0;
    }
  }


  cout<<  "UNRESTORABLE" << "\n";
}