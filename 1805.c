#include<stdio.h> 
int main  () {
   int A,B,T=0;
    scanf("%d %d",&A,&B);

    while(A<=B)
    {
        T=T+A;
        A=A+1;
    }
    printf("%d\n",T);
    
    return 0;
}