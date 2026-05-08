#include<stdio.h>

int main(void)
{
float celsius;
float fahrenheit;
printf("Enter temperature in celsius: ");
scanf("%f, &celsius");
fahrenheit = (celsius * 1.8) + 32;
printf("%f°C = %f°F\n" , celsius, fahrenheit);

 if(cesius < 0) {
        printf("❄️ Freezing weather \n");
    }


   if(cesius < 10)
        printf("🥶 Very cold weather\n");
    }

 if(cesius < 20)
        printf("Chilly weather\n");
    }

 if(cesius < 30)
        printf("Normal weather\n");
    }


 if(cesius < 40)
        printf("☀️ Hot weather\n");
    }

     if(cesius > 10)
        printf("🔥 Very hot weather\n");
    }

}
