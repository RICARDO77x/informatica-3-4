#include<stdio.h>

void add(void);
void subtract(void);
void multiply(void);
void divide(void);
int main(void)
{
int:a
int:b
printf("number 1:  \n");

printf("1 add\n");
printf("2 subtract\n");
printf("3 multiply\n");
printf("4 divide\n");
printf("Enter your option: ");
scand("%d",&opcion);

if(opcion ==1){
    add();
}else if (opcion ==2){
    subtract();
}else if (opcion ==3){
    multiply();
}else if (opcion ==4){
    divide();

