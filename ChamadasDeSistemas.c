#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

const char *str = "Escrevendo essa constante no arquivo :)!";

int main(void)
{
    // Chamada de Sistema print
    printf("Olá Mundo \n");

    //Chamada de Sistema Write

    const char* nomeArquivo = "ChamadaWrite.txt";

    int arquivo = open(nomeArquivo, O_WRONLY);
    if (arquivo == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    write(arquivo, str, strlen(str));
    printf("Escrevido no arquivo!\n");

    close(arquivo);
    exit(EXIT_SUCCESS);
}