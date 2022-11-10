
#include<stdio.h>
void print_prime(int a,int b){
 int i,j,flag,count=0;
 for(i=a;i<=b;i++){
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
 int a,b;
 printf("enter the range\n");
 scanf("%d%d",&a,&b);
 print_prime(a,b);
 return 0;

}
