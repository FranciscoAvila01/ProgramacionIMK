#include <stdio.h>
#define MAX_SIZE 1000

int main()

{
    int arr[MAX_SIZE]; //arreglo de 1000 espacios
    int N;

    printf("Ingrese la cantidad de numeros\n");
    scanf("%d", &N);
   
    printf("Ingrese %d numeros:\n",N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i =0; i<N; i++)
    {
        if(arr[i]<0)
        {
            printf("El elemento arr[%d]: %d es negativo\n", i,arr[i]);
        }
    }
   
}