#include "Tp2-Aedes.h"
#include <time.h>

int *AlocaVetor(int n){
	int *v = (int *)(malloc(sizeof(int)*n));
	return v;
}


void InicializaVetor(int *v, int n){
	int i;
	if(v!=NULL){
		for(i=0;i<n;i++)
			v[i] = i+1;
	}
	else{
		printf("Vetor Nulo!\n");
	}
}


void TrocaElemento(int *v, int i, int j){
	int	aux;
	aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}


void Permuta(int *v, int n, int i){
	int	j;
	if(i==n){
		for(j=0;j<n;j++){
			printf ("%d ", v[j]);
		}
		printf ("\n");
	}
	else{
		for(j=i;j<n;j++){
			TrocaElemento(v,i,j);
			Permuta(v,n,i+1);
			TrocaElemento(v,i,j);
		}
	}
}

