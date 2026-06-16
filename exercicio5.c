#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int vetor[25];
	srand(time(NULL));
	int n;
	int pos;
	int encontrado = 0;
	
    for( int i = 0; i < 25; i++){
	    vetor[i] = rand() % 101;
	    printf("%d ", vetor[i]);	
}
	printf("\nInforme um numero para ser procurado no vetor: ");
	scanf("%d", &n);
	
    for( int i = 0; i < 25; i++){
	    if(vetor[i] == n) {
	    	pos = i;
	    	encontrado++;
		}
		
	}
	if(encontrado != 0){
		printf("O valor %d esta na posicao %d\n", n, pos);
    }else{
    	printf("Seu número não foi encontrado");
	}
	getch();
}

	
	