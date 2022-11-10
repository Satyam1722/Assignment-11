#include<stdio.h>
void print_prime(int n){
 int i,j,flag,count=0;
 for(i=2;count!=n;i++){
        flag=0;
     for(j=2;j<=i/2;j++){
    if(i%j==0){
    flag=1;
    break;
  }
 }
 if(!flag){
    printf("%d ",i);
    count++;
 }
 }
}


int main(){
 int n;
 printf("enter a number\n");
 scanf("%d",&n);
 print_prime(n);
 return 0;

}
