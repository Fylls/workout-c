#include <stdio.h>

int ese5()
{
    int numero;
    int invertito;
    int temp;
    printf("Inserire un numero: ");
    scanf("%d", &numero);

    invertito = 0;
    temp = numero;

    while (temp > 0)
    {
        invertito *= 10;
        invertito += temp % 10;
        temp /= 10;
    }

    printf("Il risultato è %d.\n", invertito);
    if (invertito == numero)
        printf("Il numero è palindromo.\n");

    return 0;
}