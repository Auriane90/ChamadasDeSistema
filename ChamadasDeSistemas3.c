#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    // Chamada De Sistema getpid()
    int a = getpid();

    printf("%d\n", a);

    // Chamada de Sistema fork()

    fork();

    printf("Olá :)\n");

    // Chamada wait
    /*
    pid_t cpid;
    if (fork()== 0)
        exit(0);
    else
        cpid = wait(NULL);
    printf("pid pai: %d\n", getpid());
    printf("pid filho: %d\n", cpid);
    */
}