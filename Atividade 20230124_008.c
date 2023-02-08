#include<stdio.h>


int escalar(int a[],int b[],int tamanho){
    int produto = 0,i;

    for(i = 0;i < tamanho;i++){
        produto += a[i]*b[i];
    }
    return produto;
}
int main()
{

    int i,n,funcao;

    printf("Quantos numeros tem os vetores?: ");
    scanf("%d",&n);

    int x[n], y[n];

    for(i = 0;i < n;i++){
        printf("Digite um numero para o vetor x na posicao[%d]: ",i + 1);
        scanf("%d",&x[i]);
        }
    for(i = 0;i < n;i++){
        printf("Digite um numero para o vetor y na posicao[%d]: ",i + 1);
        scanf("%d",&y[i]);
        }
    funcao = escalar(x,y,n);

    printf("o produto escalar dos vetores e: %d",funcao);
    return 0;
}

