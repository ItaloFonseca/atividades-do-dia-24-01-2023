#include<stdio.h>
#define TAM 100

int fat(int num){
    int fatorial;

    for(fatorial=1;num>1;num = num-1){
        fatorial = fatorial * num;
    }
    return fatorial;
}
void saida(int v[],int tamanho){
    int j;
    for(j = 0;j < tamanho;j++){
        printf("%d ",fat(v[j]));
    }
}


int main()
{
    int vetor[TAM];
    int i,n;

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
    saida(vetor,n);
    return 0;
}
