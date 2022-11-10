#include<stdio.h>
int is_prime(int a){
 int i;
 for(i=2;i<=a/2;i++){
    if(a%i==0)
        return 0;
 }
 return 1;
}


int main(){
 int a;
 printf("enter a number\n");
 scanf("%d",&a);
 if(is_prime(a))
    printf("Prime number\n");
 else
    printf("Non-Prime number\n");
 return 0;

}
