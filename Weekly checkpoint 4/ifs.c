#include<stdio.h>

int main(void)
{
int a = 5; //equal sing means assignment
int b = 5;
int c = 10;

printf("%d == %d is %d \n",a b, a == b);//Equal sing means corparison
printf("%d == %d is %d \n",a c, a != b);//!= means "not equal"
// create a program to check if a number is negative
int number;
printf("Enter a number: ");
scanf("%d",&number);

if(number<0){
printf("%d is a negative number.\n",number);


}else{
printf("%d is a positive number.\n",number);
}






}
