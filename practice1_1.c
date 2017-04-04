#include <stdio.h>
#define RATE 2.54

int main(void) {
    float inch,cm;
    
    printf("Please input an inch.\n");
    while (scanf("%f",&inch) == 1) {
        cm = inch * RATE;
        printf("Convert to cm is %.2f.\n",cm);
    }
    return 0;
}
