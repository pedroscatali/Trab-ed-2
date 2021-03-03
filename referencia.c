#include <stdio.h>
#include <stdlib.h>

#include "btree.h"

void ler_arq(char *arq){
    FILE *fp;
    fp = fopen(arq ,"rb");
    if (fp == NULL){


    }
    else{
        
    }



}

void salvar_arq(char *arq){
    
    FILE *fp;
    fp = fopen(arq, "wb");



}

void inserir_arq(char *arq){
    FILE *fp;
    int doi,ano;
    char nome[30],autor[30];
    fp = fopen(arq, "ab");
    
    printf("\nInsira o DOI (13 algarismos):");
    scanf("%d",&doi);
    printf("\nInsira o ano:");
    scanf("%d",&doi);
    printf("\nInsira o autor:");
    scanf("%s",autor);getchar();
    printf("\nInsira o nome:");
    scanf("%s",nome);getchar();




    
}

void alterar_arq(char *arq){




}

void remover_arq(char *arq){



}

void buscar_arq(char *arq){




}

