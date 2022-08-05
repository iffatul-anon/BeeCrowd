#include<stdio.h>
int main (){
double A,B,C,A1,B1,C1;
scanf ("%lf %lf %lf",&A1,&B1,&C1);

if (A1>=B1 && B1>=C1){
    A=A1;
    B=B1;
    C=C1;
}
if (A1>=C1 && C1>=B1){
    A=A1;
    B=C1;
    C=B1;
}
if (B1>=A1 && A1>=C1){
    A=B1;
    B=A1;
    C=C1;
}
if (B1>=C1 && C1>=A1){
    A=B1;
    B=C1;
    C=A1;
}
if (C1>=A1 && A1>=B1){
    A=C1;
    B=A1;
    C=B1;
}
if (C1>=B1 && B1>=A1){
    A=C1;
    B=B1;
    C=A1;
}
if (A1==B1 && A1==C1){
    A=A1;
    B=B1;
    C=C1;
}

if(A>=(B+C)){
printf("NAO FORMA TRIANGULO\n");
}
if((A*A)==((B*B)+(C*C))){
printf("TRIANGULO RETANGULO\n");
}
if ((A*A)>((B*B)+(C*C))){
printf("TRIANGULO OBTUSANGULO\n");
}
if((A*A)<((B*B)+(C*C))){
printf("TRIANGULO ACUTANGULO\n");
}
if(A==B && A==C){
printf("TRIANGULO EQUILATERO\n");
}
if (A==B && A!=C ){
printf("TRIANGULO ISOSCELES\n");
}
if (A==C && A!=B ){
printf("TRIANGULO ISOSCELES\n");
}
if (C==B && B!=A ){
printf("TRIANGULO ISOSCELES\n");
}
    return 0;
}