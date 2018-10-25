#include <stdio.h>
#include <stdlib.h>
#include "Tp2-Aedes.h"
#include <time.h>

int main(void){
	int	*v, i, n;

	printf("Digite a quantidade de elementos: ");
	scanf("%d", &n);

    clock_t tInicial, tFinal;
    double tempo_gasto;
    tInicial = clock();

	v = AlocaVetor(n);
	InicializaVetor(v,n);
	Permuta(v,n,0);
	tFinal = clock();
    tempo_gasto = ( (double) (tFinal - tInicial) ) / CLOCKS_PER_SEC;
    printf("Tempo gasto: %.4lf s\n", tempo_gasto);
	return 0;
}
