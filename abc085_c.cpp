#include<iostream>
#include<set>
#include <stdlib.h>
using namespace std;

int main(){
  int N, Y;
  cin >> N >> Y;
  for (int i=0; i <=N ; i++){
    for (int j=0; j<= N-i; j++){
      if (10000*i+5000*j==Y-(N-i-j)*1000){
        cout<< i <<' '<< j <<' ' << N-i-j << "\n";
        return 0;
      }
    }
  }
  cout<< "-1 -1 -1" << "\n";
  return 0;
}