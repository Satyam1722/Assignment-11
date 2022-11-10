#include<stdio.h>
int hcf(int a,int b){
 while(a!=b){
    if(a>b)
    a=a-b;
 else
    b=b-a;
  }
  return a;
}


int main(){
 int a,b;
 printf("enter two numbers\n");
 scanf("%d%d",&a,&b);
 printf("hcf is %d",hcf(a,b));
 return 0;

}
