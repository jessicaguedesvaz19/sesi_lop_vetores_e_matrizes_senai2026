#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void main (){
	SetConsoleOutputCP(CP_UTF8);
	int matriz[5][5]; 
		srand(time(NULL));
	int menor = 100;
	int pos;
	int pos1;
	
	for(int i = 0; i < 5; i++){ 
		for(int j = 0; j < 5; j++){ 
		    matriz[i][j] = rand() % 101;
			printf(" %d\t", matriz[i][j]);
			if(matriz[i][j] < menor){
    		menor = matriz[i][j];
    		pos=i + 1;
    		pos1=j + 1;
			}
		}
		printf("\n");
	}
	printf("\nA menor matriz é: %d e a posição da linha é: %d e da coluna é %d", menor, pos, pos1);
	
	getch();
}
