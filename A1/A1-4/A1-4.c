#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Variablen
    float celsius=0;
    float fahrenheit;
	
    // Ausgabe
    printf("\n\tCELSIUS  ZU  FAHRENHEIT\n\n");
    printf("\tCelsius\t\tFahrenheit\n");
    while (celsius <= 300) {
        fahrenheit = (9*celsius)/5+32;
        printf("\t %5.1f°\t\t %5.1f°\n", celsius, fahrenheit);
        celsius = celsius + 10;
    }
    printf("\n\n");
	
    // return
    return 0;
}
