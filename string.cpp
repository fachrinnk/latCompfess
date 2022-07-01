#include<bits/stdc++.h>
using namespace std;

#define bdm_io ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main(){
  bdm_io;

  string s;
  cin>>s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  for(int i=0;i<s.size();i++){

    if(s[i] == 'a'|| s[i] == 'o'|| s[i] == 'y'|| s[i] == 'e'|| s[i] == 'u'|| s[i] == 'i'){
      continue;
    }else{
      cout<<"."<<s[i];
    }
  }

  return 0;
}