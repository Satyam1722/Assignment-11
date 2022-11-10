#include<stdio.h>
int comb(int n,int r){
  return fact(n)/(fact(n-r)*fact(r));
}

int fact(n){
  int f=1,i;
  for(i=1;i<=n;i++)
    f*=i;
  return f;
}

void pascal(int n){
  int i,j,count;
  for(i=0;i<n;i++){
        count=0;
    for(j=0;j<2*n-1;j++){
        if(j>=n-1-i && j<=n-1+i){
        printf("%d ",comb(i,count));
        count++;
        printf("  ");
        j++;
       }
        else
        printf("  ");
    }
      printf("\n");
  }

}

int main(){
  int n;
  printf("enter the number of rows\n");
  scanf("%d",&n);
  pascal(n);
  return 0;
}
