#include <stdio.h>
#include <stdlib.h>
int main (){
    int *arreglo, *arreglo2, num, cont;//declracion de variables en este caso usaremos dos apuntadores
    printf("¿Cuántos elementos tiene el conjunto?\n");
    scanf("%d",&num);//se  lee la dimension del vector
    arreglo = (int *)malloc (num * sizeof(int));//malloc aparta la memoria y la limpia
    if (arreglo!=NULL) {//aqui se encuntra una condicion la cual dice que si la dimension del vector diferente 0 osea un vector nulo entra y si es 0 no entra
            for (cont=0 ; cont < num ; cont++){//en este ciclo nos estara pidiendo los datos que almacenara el vector
            printf("Inserte el elemento %d del conjunto.\n",cont+1);//aqui los pide
            scanf("%d",(arreglo+cont));//aqui los lee y los almacena
            }
    printf("Vector insertado:\n\t[");
    for (cont=0 ; cont < num ; cont++){//en este ciclo te manda a imprimir los valores del vector
        printf("\t%d",*(arreglo+cont));
        }
    printf("\t]\n");
    printf("Aumentando el tamaño del conjunto al doble.\n");
    num *= 2;
    arreglo2 = (int *)realloc (arreglo,num*sizeof(int));//con realloc estamos redimensionando el espacio
    //del vector lo cual nos da a entender que este nos ayuda a expandir la memoria reservada
    if (arreglo2 != NULL) {//aqui se encuntra una condicion la cual dice que si la dimension del vector es 0 no entra
        arreglo = arreglo2;
        for (; cont < num ; cont++){//en este ciclo pide los datos que hacer falta ya que la dimension del vector aumento al doble
            printf("Inserte el elemento %d del conjunto.\n",cont+1);
            scanf("%d",(arreglo2+cont));//aqui lo lee y los almacena
            }
        printf("Vector insertado:\n\t[");
        for (cont=0 ; cont < num ; cont++){
            printf("\t%d",*(arreglo2+cont));//en este ciclo te manda a imprimir los valores del vector ya redimensionado
            }
        printf("\t]\n");
        }
        printf("Se libera el espacio reservado.\n");
        free (arreglo);//se librea el espacio reservado para el vector
    }
    return 0;
}
