#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    printf("digite el mes de naciemiento\n");
    scanf("%i",&m);
    switch (m)
    {

    case 1 : printf("usted nacio en enero");
break;
    case 2: printf("usted nacio en febrero");
break;
    case 3: printf("usted nacio en marzo");
break;
    case 4: printf("usted nacio en abril");
break;
    case 5: printf("usted nacio en  mayo");
break;
    case 6: printf("usted nacio en junio");
break;
    case 7: printf("usted nacio en julio");
break;
    case 8: printf("usted nacio en agosto");
break;
    case 9: printf("usted nacio en septiembre");
break;
    case 10: printf("usted nacio en octubre");
break;
    case 11: printf("usted nacio en noviembre");
break;
    case 12: printf("usted nacio en diciembre");
break;
    default: printf("numero digitado no esta en el rango");

    }



    return 0;
}
