
#include<stdio.h>
void print_fibonacci(int n){
 int a=0,b=1,c;
 while(n--){
    printf("%d ",a);
    c=a+b;
    a=b;
    b=c;
 }

}


int main(){
 int n;
 printf("enter a number\n");
 scanf("%d",&n);
 print_fibonacci(n);
 return 0;

}
