#include <stdio.h>
#include <stdlib.h>

int main()
{
    int   x;
    float a;
    float b;
    float c=1;
    float d=0;
    float w;

    printf("calculadora...\n");
    do{printf("que decea hacer?\n 1 para sumar \n 2 para restar \n 3 para multiplicar \n 4 para dividir \n 5 para elevar a un radical\n 6 para radical\n");
    scanf("%i",&x);}while(x>6||x<1);
    //valor para tomar cual de la s5 acciones hacer
    printf("digite el primer valor");
    scanf("%f",&a);
    printf("digite el segundo valor");
    scanf("%f",&b);

    switch (x)
{
    case  1 : c=a+b;    printf("respuesta:%f",c);
break;
    case  2 : c=a-b;    printf("respuesta:%f",c);
break;
    case  3 : c=a*b;    printf("respuesta:%f",c);
break;
    case  4 : c=a/b;    printf("respuesta:%f",c);
break;
    case  5 : for(d=0;d<b;d++){c=c*a;}
    printf("respuesta %f",c);
break;
    case  6 :w=1/b; for(d=0;d<b;d++){c=c*a*w;}
    printf("respuesta %f",c);
break;
};



    return 0;
}
