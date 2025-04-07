
#include <stdio.h>

int main()
{
   int peso;
   float imc,altura;
   
   printf("Ingrese su peso (kg):  ");
   scanf("%d", &peso);
   
   printf("Ingrse su altura (m):  ");
   scanf("%f", &altura);
   
   imc= peso/(altura*altura);
   printf("Su imc es:%2f\n", imc);
   
   if(imc >=40){
       printf("Obesidad clase 3\n");
      } else if (imc >= 35.00 && imc<=39){
          printf("Obesidad clase 2\n");
      }else if (imc >=30.00 && imc<=34.09){
          printf("Obesidad clase 1\n");
      }else if (imc >=25.00 && imc<=29.09){
          printf("Sobrepeso\n");
      }else if(imc >=18.05 && imc<=24.09){
          printf("Normal\n");
      }else if(imc <=18.04){
          printf("Bajo peso");
      }
   

    return 0;
}