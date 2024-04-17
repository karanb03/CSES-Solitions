#include <bits/stdc++.h>
using namespace std;
const int maxN=1e6+5;
char s[maxN];
int n,curr,best;
int main(){
  scanf(" %s",s);
  n=(int) strlen(s);
  curr=best=1;
  for(int i=1;i<n;i++){
    if(s[i]==s[i-1]){
      curr++;
    }else{
      curr=1;
    }
    best=max(best,curr);
  }
  printf("%d\n",best);
}