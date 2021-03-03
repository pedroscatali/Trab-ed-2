#include<stdio.h>
#include<stdlib.h>

#include "btree.h"



int main(){
    int opr = 5;
    char arq[30];
    while(opr!=0){
        printf("\tQual operação deseja realizar:\n");
        printf("\t1.Inserir\n\t2.Alterar\n\t3.Remover\n\t4.Buscar\n\t0.Sair\n");
        scanf("%d", &opr);
        printf("\n\tInsira o nome do Arquivo");
        scanf("%s",arq);
        switch (opr)
        {
        case 0:
            break;
        case 1:
            inserir_arq(arq);
            break;
        case 2:
            alterar_arq(arq);
            break;
        case 3:
            remover_arq(arq);
            break;
        case 4:
            buscar_arq(arq);
            break;
        default:
            printf("Operação não encontrada!");
            break;
        }
    }
    


    
}