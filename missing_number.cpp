#include <bits/stdc++.h>

using namespace std;

int N,x,sum;

int main(){
    scanf("%d", &N);
    for(int i=1;i<=N;i++){
      sum ^=i;
    }
    for(int i=0;i<N-1;i++){
      scanf("%d",&x);
      sum^=x;
    }
    printf("%d\n",sum);
}