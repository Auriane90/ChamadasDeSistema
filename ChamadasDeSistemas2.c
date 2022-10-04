#include <sys/types.h>
#include<sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int main(void){
    // Chamada de Sistema Scanf
    int i;

    printf("Digite um número: ");
    scanf("%d", &i);

    printf("O número é %d\n", i);

    // Chamada de Sistema read
    FILE *arquivo;
    char c;

    arquivo = fopen("ChamadaWrite.txt","r");
    if (arquivo == NULL)
    {
        printf("Erro!");
        exit(1);
    }
    printf("Exibindo Arquivo \n\n");
    do
    {
        c = fgetc(arquivo);

        printf("%c" , c);
    }while (c != EOF);

    printf("\n\n");

    fclose(arquivo);

    // Chamada de Sistema gets()
    /*
    char nome[10];
    printf("Insira seu nome: ");
    gets(nome);
    printf("Nome: %s", nome);
    */
}