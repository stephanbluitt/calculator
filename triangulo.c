#include <stdio.h>
#include <stdlib.h>
/**
100/100
**/
#include<stdio.h>
int main (){

  int a;
  int b;
  int alto;

  printf("Alto: ");
  scanf("%d", &alto);

  for(a = 0; a < alto; a++){
    for(b = 0; b < alto; b++){
      if(b <= a){
        printf("*");
      }//fin if
      if(b == a){
        printf("\n");
      }//fin if
    }//fin for
  }//fin for       */

return 0;
}
