#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
	int vetor[25];
	    srand(time(NULL));
	
    for( int i = 0; i < 25; i++){
    vetor[i] = rand() % 101;
    printf("%d\n", vetor[i]);		
	}
	getch();
}