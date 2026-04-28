
#include<stdio.h>

int main(void)
{

int length;
int width;
printf("Enter the length of the rectangle: \n");
scanf("%d", &length);
printf("Enter the width of the rectangle: \n");
scanf("%d", &width);
int Area =length*width;
int Perimeter = (length+width)*2;
printf("Area = %d\n",Area);
printf("perimeter = %d\n",Perimeter);


}
