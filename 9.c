#include<stdio.h>
int square(n){
 return n*n;
}

int main(){
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  printf("%d ",square(n));
  return 0;
}
