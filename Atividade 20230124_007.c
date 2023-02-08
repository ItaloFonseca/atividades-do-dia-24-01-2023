#include<stdio.h>

int main()
{
    int v[] = {1,2,3,4,5,6};
    int lancamento,i,face,um=0,dois=0,tres=0,quatro=0,cinco=0,seis=0;

    printf("Quantos lancamentos?: ");
    scanf("%d",&lancamento);

    for(i = 0; i < lancamento;i++){
        printf("No lancamento %d qual face apareceu?: ",i+1);
        scanf("%d",&face);

        if(face == v[0]){um++;}
        else if(face == v[1]){dois++;}
        else if(face == v[2]){tres++;}
        else if(face == v[3]){quatro++;}
        else if(face == v[4]){cinco++;}
        else if(face == v[5]){seis++;}
        else{printf("numero invalido");}
    }
    printf("O numero de ocorrecia de cada numero foi: 1 - %d;2 - %d;3 - %d;4 - %d;5 - %d;6 - %d",um,dois,tres,quatro,cinco,seis);

    return 0;
}
