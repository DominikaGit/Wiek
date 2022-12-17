#include <stdio.h>
/*Podaj swoj wiek w sekundach*/
#define ROK 3.156e7;
int main() {
    int wiek, wiek_sekundy;
    printf("Podaj swoj wiek w latach:");
    scanf("%d", &wiek);
    wiek_sekundy=wiek*ROK;
    printf("Zyjesz %e sekund!", (double)wiek_sekundy);
    getchar();
    return 0;
}
