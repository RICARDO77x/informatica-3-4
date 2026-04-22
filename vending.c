#include <stdio.h>

int main(void){
//variables for Tortas Chuma
float price1=74.99; //
int quantity1=15;// es para poner un numero entero nada de decimales
char select1='t';

//variables for tacos piporro
float price2=109.90;
int quantity2=10;
char select2='p';

//VARIABLES pizzas italianas
float price3=219.90;
int quantity3=20;
char select3='q';



//print stock of vending machine
printf("vending Machine Stock\n");
printf("------------------------\n");

printf("Item name:tortas Chuma\n");
printf("Price $%.2f\n",price1);
printf("quantity %d\n",quantity1);
printf("select %c\n",select1);

printf("------------------------\n");

printf("Item name:tortas Chuma\n");
printf("Price $%.2f\n",price2);
printf("quantity %d\n",quantity2);
printf("select %c\n",select2);

printf("------------------------\n");
printf("Item name:tortas Chuma\n");
printf("Price $%.2f\n",price3);
printf("quantity %d\n",quantity3);
printf("select %c\n",select3);




}
