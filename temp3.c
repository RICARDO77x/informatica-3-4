#include <stdio.h>

void c_to_f(void);
void f_to_c(void);

int main(void){
 //3. Call
 c_to_f();
f_to_c();
  }

 //2. Define
 void c_to_f(void){
   float c;
   printf("Enter the temperature in Celsius: ");
   scanf("%f", &c);
   float f = (c * 1.8) + 32;
   printf("%.2f°C = %.2f°F \n", c, f);
 }

 void f_to_c(void){
   float f;
   printf("Enter the temperature in Celsius: ");
   scanf("%f", &c);
   float f = (c * 1.8) + 32;
   printf("%.2f°C = %.2f°F \n", c, f);
 }




