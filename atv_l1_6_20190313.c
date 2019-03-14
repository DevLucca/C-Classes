#include <stdio.h>
#include <string.h>

// gcc teste.c -std=c99

int main(int argc,char *argv[]){

    int qtd;
    printf("         BEM VINDO AO PROGRAMA\n------------------------------------------");
    printf("\nFAVOR INSERIR A QUANTIDADE DE PESSOAS: ");
    scanf("%d",&qtd);
    int idade[qtd], maidade, meidade, soma_idade = 0;
    char nome[qtd][15], nomeme[15];
    for(int i = 0;i<qtd;i++){
    printf("INSERIR NOME E IDADE DA %d PESSOA:\n",i+1);
    scanf("%s%d",&nome[i],&idade[i]);
    soma_idade += idade[i];
    }
    
    maidade = idade[0];
    meidade = idade[0];
    for(int i = 0;i<qtd;i++){
        // ----- MAIOR IDADE ----- //
        if(maidade < idade[i]){
            maidade = idade[i];
        }
        // ----- MENOR IDADE ----- //
        if(meidade > idade[i]){
            meidade = idade[i];
        }
    }
        // ----- NOME MENOR IDADE ----- //
        for(int i = 0;i<qtd;i++){
            if(meidade == idade[i]){
                strcpy(nomeme,nome[i]);
            }
        }
        // ----- MEDIA IDADE ----- //
        float media = (float) soma_idade/qtd;
    
    printf("ENTRE %d PESSOAS, TEMOS:\n",qtd);
    printf("\nESTA E A MAIOR IDADE: %d ANO(S)!\n",maidade);
    printf("\n%s E A PESSOA DE MENOR IDADE, COM %d ANO(S)!\n",nomeme,meidade);
    printf("\nESTA E A MEDIA ENTRE AS IDADES: %0.2f ANO(S)!\n",media);
return 0 ;
}
