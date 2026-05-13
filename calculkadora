#include <stdio.h>

// Prototipos de las funciones
void addition(void);
void subtraction(void);
void multiplication(void);
void division(void);

int main(void) {
printf("Calculator \n");
printf("1. addition \n");
printf("2. subtraction \n");
printf("3. multiplication \n");
printf("4. division \n");
printf("Enter your option: ");

int user_response;
scanf("%d", &user_response);

if (user_response == 1) {
addition();
}
else if (user_response == 2) {
subtraction();
}
else if (user_response == 3) {
multiplication();
}
else if (user_response == 4) {
division();
}
else {
printf("Invalid option \n");
}

return 0;
}

// Implementación de operaciones aritméticas
void addition(void) {
float a, b;
printf("Number 1: \n");
scanf("%f", &a);
printf("Number 2: \n");
scanf("%f", &b);
printf("Result = %f\n", a + b);
}

void subtraction(void) {
float a, b;
printf("Number 1: \n");
scanf("%f", &a);
printf("Number 2: \n");
scanf("%f", &b);
printf("Result = %f\n", a - b);
}

void multiplication(void) {
float a, b;
printf("Number 1: \n");
scanf("%f", &a);
printf("Number 2: \n");
scanf("%f", &b);
printf("Result = %f\n", a * b);
}

void division(void) {
float a, b;
printf("Number 1: \n");
scanf("%f", &a);
printf("Number 2: \n");
scanf("%f", &b);
if (b != 0) {
printf("Result = %f\n", a / b);
} else {
printf("Error: Division by zero \n");
}
}
