#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
ll x, mx,sum;
int main(){
  scanf("%d",&n);
  scanf("%lld",&mx);
  for(int i=1;i<n;i++){
    scanf("%lld",&x);
    mx=max(mx,x);
    sum+=(mx-x);

  } 
  printf("%lld\n",sum);
}