#include<stdio.h>
#define TAM 100


int main()
{
    int vetor[TAM];
    int i,j,n;

    printf("Quantos numeros (numero tem que ser menor que 100 e positivo)? ");
    scanf("%d",&n);

    if(n > 100 || n < 0){
        while(n > 100 || n < 0){
            printf("\nQuantidade invalida\n");
            printf("\nDigite outra quantidade que seja menor que 100 e positivo: ");
            scanf("%d",&n);
        }
    }

    for(i = 0;i < n;i++){
        printf("Digite um numero: ",i + 1);
        scanf("%d",&vetor[i]);
        }
    for(j = n-1;j >= 0;j--){
        printf("%d ",vetor[j]);
    }
    return 0;
}
