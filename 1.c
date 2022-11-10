#include<stdio.h>
int lcm(int a,int b){
 int lcm;
 lcm=a>b?a:b;
 do{
    if(lcm%a==0 && lcm%b==0)
        return lcm;
    lcm++;
 }while(1);
}

int main(){
 int a,b;
 printf("enter two numbers\n");
 scanf("%d%d",&a,&b);
 printf("lcm is %d",lcm(a,b));
 return 0;

}
