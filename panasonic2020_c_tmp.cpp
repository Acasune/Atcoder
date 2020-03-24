#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<cstring>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<climits>
#include<fstream>
 
#define MOD (1000000007)
 
using namespace std;
 
typedef long long int Int;
 
constexpr Int TEN(int n) { return n == 0 ? 1 : 10 * TEN(n-1); }
 
int N;
 
void dfs(string s, char mx) {
    if(s.size() == N) {
        cout<<s<<endl;
    } else {
        for(char c = 'a'; c <= mx;c++) {
            dfs(s+c,c == mx ? mx+1 : mx);
        }
    }
}
int main(void) {
    cin>>N;
 
    dfs("",'a');
 
    return 0;
}
