
#include<stdio.h>
int next_prime(int a){
 int i,j,flag;
 for(i=a;;i++){
        flag=0;
     for(j=2;j<=i/2;j++){
       if(i%j==0){
        flag=1;
        break;
       }

  }
 if(!flag)
    return i;
 }

}


int main(){
 int a;
 printf("enter a number\n");
 scanf("%d",&a);
 printf("Next prime number is %d",next_prime(a+1));
 return 0;

}
