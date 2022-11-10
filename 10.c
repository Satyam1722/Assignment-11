#include<stdio.h>

int fact(n){
  int f=1,i;
  for(i=1;i<=n;i++)
    f*=i;
  return f;
}

int series(n){
  int i,s=0;
  for(i=1;i<=n;i++){
    s+=fact(i)/i;
  }
  return s;
}

int main(){
  int n;
  printf("enter the number of terms : ");
  scanf("%d",&n);
  printf("sum is %d",series(n));
  return 0;
}
