#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nota;
    printf("Introduzca una nota (0-10): ");
    scanf("%d", &nota);

    switch (nota)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
          printf("Has suspendido campeon ");
          break;

        case 5:
            printf("Uyy casi al pozo ");
            break;

        case 6:
            printf("Ni bien ni mal ");
            break;

        case 7:
        case 8:
            printf("Muy bien notable ");
            break;

        case 9:
        case 10:
            printf("Eres un crack ");
            break;

        default:
        printf("Nota invalida tonto ");

    }
    printf("\n");






    return 0;
}
