#include<stdio.h>

int main(void)
{
int item;
int price;
int total;

float price1=74.99;
int quantity1=15;
char select1='tortas';
printf("enter the name of the purchased item: \n");
scanf("%d", &item);
printf("enter the price of the item: \n");
scanf("%d", &price);
printf("enter the quantity purchased: \n");
scanf("%d", &total);

printf("el chambaso\n");
printf("------------------------\n");

printf("Item:tortas Chuma\n");
printf("Price $%.2f\n",price1);
printf("total %d\n",quantity1);
printf("select %c\n",select1);



}
