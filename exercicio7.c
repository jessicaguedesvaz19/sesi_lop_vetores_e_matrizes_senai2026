#include <stdio.h>
#include <time.h>
#include <windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int vetor[25];
	    srand(time(NULL));
	int x;
	
    for( int i = 0; i < 25; i++){
    vetor[i] = rand() % 101;
    printf(" %d ", vetor[i]);		
	}
	
	printf("\nVocê deseja ver os números em ordem crescente(1) ou decrescente(2)? ");
	scanf("%d", &x);
	
	if( x == 1){
		for( int i = 0; i < 25; i++){
			for( int j = 0; j < 25; j++){
				if( vetor[j] > vetor[i]){
				int temp = vetor[j];
				vetor[j] = vetor[i];
				vetor[i] = temp; 	
				}
			}
		}
		for(int i = 0; i < 25; i++){
		printf(" %d ", vetor[i]);
	}
	}
	
	
	if( x == 2){
		for( int i = 0; i < 25; i++){
			for( int j = 0; j < 25; j++){
				if( vetor[j] < vetor[i]){
				int temp = vetor[j];
				vetor[j] = vetor[i];
				vetor[i] = temp; 
			    }
			}
		}
		for(int i = 0; i < 25; i++){
		printf(" %d ", vetor[i]);
    }
	}

	
	getch();
}