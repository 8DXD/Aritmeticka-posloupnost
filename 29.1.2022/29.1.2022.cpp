#include <stdio.h>

int main()
{
    // Proměnná a je člen posloupnosti, d je deference, n je následující člen
    int a, d, n = 1;
    printf("Zadej clen posloupnosti: ");
    scanf("%d", &a);
    printf("Zadej diferenci: ");
    scanf("%d", &d);
    for (int i = 1; i <= 20; i++) {
        n = a + (i - 1) * d;
        printf("%2d. Cislo: %2d \n", i, n);
    }
}
