#include <stdio.h>
#include <stdlib.h>

/*OBJETIVO:
O objetivo desta experiência é medir e analisar o tempo de execução da
operação de busca sequêncial, sequencial ordenada e busca binária em um
array de números inteiros, para diferentes tamanhos.*/

/*METODOLOGIA:
Para realizar a tarefa o aluno deve induzir o pior caso e caso médio para os
algoritmos de busca. Depois deve contabilizar quantas iterações esses
métodos levam para realizar as buscas. Para o caso médio*/

int buscaLinear(int *V, int num_vetor, int elem){ 
    for(int i = 0; i<num_vetor; i++){
        if(V[i] == elem){
            return i;
        }
    }
    return -1;
}

int buscaLinearOrdenada(int *V, int N, int elem){

    for(int i=0; i<N; i++){
        if(V[i] == elem){
            return i;
        }
        else if(V[i] > elem){ // dessa forma, se o elemento forma maior numa sequencia crescente, quer dizer que ele não está nela
            return -1;
        }
    }
    return -1;
}

int buscaBinaria(int *V, int N, int elem){
    int inicio, meio, final;
    inicio = 0;
    final = N-1;
    while(inicio <= final){
        meio = (inicio+final)/2;
        if(elem<V[meio]){
            final = meio-1;
        }
        else if(elem>V[meio]){
            inicio = meio+1;
        }
        else{
            return meio;
        }
    }
    return -1;
}

int geraPosRandomBusca(int tam){
    return (rand() % tam);
}

int main(){

    FILE *medioCaso = fopen("medioCaso.txt", "w+");
    if(medioCaso == NULL){printf("Erro de abertura.\n"); exit(1);}
    FILE *piorCaso = fopen("piorCaso.txt", "w+");
    if(piorCaso == NULL){printf("Erro de abertura.\n"); exit(1);}
    
    int *interacao = (int*)malloc(sizeof(int));
    int *array = (int*)malloc(sizeof(int));

    int tam = 5000;

    int i =0;
    for(i = 0; i<=30; i++){
        for(int j=5000; j<=50000; j+=5000){
            
        }
    }


    fclose(medioCaso);
    fclose(piorCaso);
}