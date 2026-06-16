#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int vetor[25];
	int maior = 0;
	int pos;
	
	srand(time(NULL));
	
    for( int i = 0; i < 25; i++){
    	vetor[i] = rand() % 101;
    	printf("%d,", vetor[i]);
    	if(vetor[i]>maior){
    		maior = vetor[i];
    		pos=i + 1;
			}
		}
	printf("\nO maior vetor é: %d e a posição é: %dº", maior, pos);
	getch();
	}

 