#include<stdio.h>
int main(){
long long int n,n1,n2,n3,n4,n5,x=0,y=0;
scanf("%lld",&n);
n1=n%400;
n2=n%100;
n3=n%4;
n4=n%15;
n5=n%55;

if(n1==0 || (n2!=0 && n3==0)){
    printf("This is leap year.\n");
    x=1;
    y=1;
}

if(n4==0){
    printf("This is huluculu festival year.\n");
    y=1;
}
if(n5==0 && x==1){
    printf("This is bulukulu festival year.\n");
}
if(y==0){
    printf("This is an ordinary year.\n");
}
    return 0;
}