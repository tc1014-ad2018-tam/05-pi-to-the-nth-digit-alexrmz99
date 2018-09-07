/* This program was elaborated for the homework number 6.
 * The purpose of this program is asking the user for the amount of decimals he wants Pi to have.
 *
 * Autor: Alejandro Ramírez Michel
 * Fecha: 6 de septiembre, 2018
 * Correo: alex.ramirez.99@hotmail.com
 */

#include <stdio.h>
#include <math.h> //because the program includes math functions

int main() {
    int number;
    double pi=0;

    printf("Hello user. In this program I will help you get the value of Pi depending on how many decimals you want it to have.\n");
    printf("Give me the number of digits you want: ");
    scanf("%i", &number);

    //the loop starts here. it will repeat as many times as "number"
    for (int k=0; k < number; k++) {
        pi += (pow(16, -k)) * (4.0 / (8.0 * k + 1) - 2.0 / (8.0 * k + 4) - 1.0 / (8.0 * k + 5) - 1.0 / (8.0 * k + 6)); /*
                                                                                    this is the formula to get the decimal numbers*/
    }
        printf("The value of Pi with %d decimals is %.*lf", number, number, pi);

    return 0;
}