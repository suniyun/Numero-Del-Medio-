#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primerNumero;
    int segundoNumero;
    int tercerNumero;
    int maximo;
    int minimo;
    int numeroDelMedio;

    maximo = primerNumero;
    minimo = primerNumero;

    printf("Ingrese el primer numero.");
    scanf("%d", &primerNumero);
    fflush(stdin);

    printf("Ingrese el segundo numero.");
    scanf("%d", &segundoNumero);
    fflush(stdin);

    if(segundoNumero<minimo){
        minimo = segundoNumero;

    } else{
        if(segundoNumero>maximo){
            maximo = segundoNumero;
        }
        }

    printf("Ingrese el tercer numero.");
    scanf("%d", &tercerNumero);
    fflush(stdin);

    if(tercerNumero<minimo){
        minimo = tercerNumero;

    } else{
        if(tercerNumero>maximo){
            maximo = tercerNumero;
        }
        }

    if(numeroDelMedio < maximo && numeroDelMedio > minimo){
        printf("El numero del medio es: %d", numeroDelMedio);

    }else{
        printf("No hay numero del medio.");
        }

 return 0;
}
