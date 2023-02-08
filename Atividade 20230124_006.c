#include<stdio.h>
int menor(int a[],int m){
    int men = 0,i;
    i = 1;
    while(i < m){
        if(a[i] < a[men]){men = i;}
        i++;
    }
    return men;
}
int selection_sort(int b[],int o){
    int f,men;
    int i;
    for(i = 0;i < o;i++){
        f = b[i];
        men = menor(b + i,o - i) + i;
        if(f > b[men]){
            b[i] = b[men];
            b[men] = f;
        }
    }
    return 0;
}
int main()
{
    int i,n,funcao;

    printf("Quantos numeros tem o vetor?: ");
    scanf("%d",&n);

    int x[n];

    for(i = 0;i < n;i++){
        printf("Digite um numero para o vetor na posicao[%d]: ",i + 1);
        scanf("%d",&x[i]);
        }
    selection_sort(x,n);

    for(i = 0;i < n;i++){printf("%d ",x[i]);}

    return 0;
}

