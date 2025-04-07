
#include <stdio.h>

int main()
{
    int orden,ingredientes;
    printf("Bienvenidos a la pizzeria Bella Napoli\n");
    printf("(Nuestras pizzas llevan mozzarella y salsa de tomate)\n");
    printf("¿Desea la pizza 1. vegetariana o no 2.vegetariana?\n ");
    scanf("%d", &orden);
   
    switch(orden){
        case 1: 
         printf("Ingredientes disponibles para la pizza vegetariana son : 3.Pimiento, 4.Tofu\n");
         printf("Seleccione un ingrediente adicional: ");
         scanf("%d", &ingredientes);
         
         switch(ingredientes){
         case 3:
         printf("Su pizza vegetariana tendrá mozzarella, salsa de tomate y Pimiento\n");
         printf("¡Disfrutala! :)");
         break;
         
         case 4:
         printf("Su pizza vegetariana tendrá mozzarella, salsa de tomate y Tofu\n");
         printf("¡Disfrutala! :)");
         break;
         }
        
        break;
        
        case 2: printf("Ingredientes disponibles para la pizza no vegetariana son: 5.Peperoni, 6.Jamon, 7.Salmon\n");
        printf("Seleccione un ingrediente adicional: ");
        scanf("%d", &ingredientes);
        
        switch(ingredientes){
            case 5:
            printf("Su pizza no vegetariana tendrá mozzarella, salsa de tomate y Peperoni\n");
            printf("¡Disfrutala! :)");
         break;
        
            case 6:
            printf("Su pizza no vegetariana tendrá mozzarella, salsa de tomate y Jamon\n");
            printf("¡Disfrutala! :)");
            break;
            
            case 7:
            printf("Su pizza no vegetariana tendrá mozzarella, salsa de tomate y Salmon\n");
            printf("¡Disfrutala! :)");
            break;
        }
        break;
    }

    return 0;
}