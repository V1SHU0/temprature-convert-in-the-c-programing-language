#include <stdio.h>
int main(){
    float celscius, ferhanite, kelvin;
    printf("what would you like to convert to what");
    scanf("%f", &celscius);
    ferhanite = celscius * 9 / 5 + 32;

    printf("its %f degree ferhanite", ferhanite);

    return 0;
}