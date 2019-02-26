#include <stdio.h>
#include <stdlib.h>

int main()
{   int m = 0;
    int d = 0;
    float respuesta;
    char  nombre[50];

    printf("digite su nombre\n");
    scanf("%s",&nombre);

    do{
       printf("digite el mes de nacimiento\n");

       scanf("%i",&m);
       }
       while( m>12 || m<1 );
    do{
       printf("%s digite el dia que nacio\n",nombre);

       scanf("%i",&d);
       }
       while( d>31 || d<1 );

       switch(m){
       case 1 :
           if(d>=20){
       printf("estimado %s, usted es acuario\n",nombre);
       }else{ printf("estimado %s, usted es capricornio\n",nombre);
             };
             break;
       case 2 : if(d>=19){printf("estimado %s, usted es piscis\n",nombre);}
       else{
        printf("estimado %s, usted es eres acuario\n",nombre);
       };    break;
       case 3 : if(d>=21){printf("estimado %s, usted es aries\n",nombre);}
       else{
        printf("estimado %s, usted es piscis\n",nombre);
       };    break;
       case 4 : if(d>=20){printf("estimado %s, usted es tauro\n",nombre);}
       else{
        printf("estimado %s, usted es aries\n",nombre);
       }; break;
       case 5 : if(d>=21){printf("estimado %s, usted es geminis\n",nombre);}
       else{
        printf("estimado %s, usted es tauro\n",nombre);
       }; break;
       case 6 : if(d>=21){printf("estimado %s, usted es cancer\n",nombre);}
       else{
        printf("estimado %s, usted es geminis\n",nombre);
       };   break;
       case 7 : if(d>=23){printf("estimado %s, usted es leo\n",nombre);}
       else{
        printf("estimado %s, usted es cancer\n",nombre);
       };    break;
       case 8 : if(d>=23){printf("estimado %s, usted es virgo\n",nombre);}
       else{
        printf("estimado %s, usted es leo\n",nombre);
       };   break;
       case 9 : if(d>=23){printf("estimado %s, usted es libra\n",nombre);}
       else{
        printf("estimado %s, usted es virgo\n",nombre);
       };    break;
       case 10 : if(d>=23){printf("estimado %s, usted es escorpion\n",nombre);}
       else{
        printf("estimado %s, usted es libra\n",nombre);
       };    break;
       case 11 : if(d>=22){printf("estimado %s, usted es sagitario\n",nombre);}
       else{
        printf("estimado %s, usted es escorpion\n",nombre);
       };    break;
       case 12 : if(d>=22){printf("estimado %s, usted es capricornio\n",nombre);}
       else{
        printf("estimado %s, usted es sagitario\n",nombre);
       };    break;

       };




    return 0;
}
