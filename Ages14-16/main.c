  // Example F to C program in "c"
#include <stdio.h>      // This includes the file stdio.h into your code so it knows what the functions such as printf() mean.
#include <stdlib.h>

const float LOW_TEMP_F_WARNING=0.;  // Program constants
const float HIGH_TEMP_F_WARNING=100.;
const int MAX_LOOP=5.;

int main()
{

  float temp_f; // Declaration of variables that the program will use
  float temp_c;
  int i;
  for(i=0; i<MAX_LOOP; i++){   // loop
    printf("\nEnter the temperature in degrees F : ");     // Input the temperature to convert
    scanf("%f",&temp_f);     // Reads the user input

    temp_c = (temp_f- 32)/1.8; // Math formula to convert Fahrenheit to Celsius

    printf("The temperature in Celsius (C) is  %f\n",temp_c); // Output the Celsius result

    if(temp_f > HIGH_TEMP_F_WARNING){ // Check for high temperature
      printf("Remember to hydrate\n");
    }

    if(temp_f < LOW_TEMP_F_WARNING ){ // Check for low temperature
      printf("Remember to pack Long underwear\n");
    }
  }

  return(0); // exits the program
}

