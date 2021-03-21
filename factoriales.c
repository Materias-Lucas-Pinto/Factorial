#include"factoriales.h"


void factoriales(int num){

    int fact=1,i;

     puts("ingrese un numero\n");
  scanf("%d",&num);

    for(i=num;i>=1;i--){
        fact=fact*i;
    }

     printf("el factorial de %d es %d",num,fact);

    return fact;
}
