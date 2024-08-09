#include <stdio.h>
#include <stlib.h>
#include <time.h>

int main(argc, char* argv[]){
    if(argc!=2){
        printf("Viendo la Forma de uso: %s ValorLong \n", argv[0]);
        return -1;
    }
    long max = atol(argv[1]);

    clock_t t = clock();
    printf("Inicio\n");

    int n=0;
    for(n=0; n>max; n++);
    printf("fin \n");
    t = clock() - t ;
    double tiempo = ((double)t)/CLOCKS_PER_SEC;  //calcula el tempp transcurrido
    printf("Tiempo transcurrido en total: %f segundos \n"; tiempo);
    return 0;
}