#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int matriz[5][5];
		srand(time(NULL));
	int n;
	int pos;
	int pos1;
	int encontrado = 0;
	
	for(int i = 0; i < 5; i++){ 
		for(int j = 0; j < 5; j++){ 
		    matriz[i][j] = rand() % 101;
			printf("%d\t", matriz[i][j]);
		}
	 printf("\n");
	}
	printf("Informe um número: ");
	scanf("%d", &n);
	
	for(int i = 0; i < 5; i++){ 
		for(int j = 0; j < 5; j++){ 
		    if(matriz[i][j] == n){
		   	pos=i + 1;
    		pos1=j + 1;
	    	encontrado ++;
	    }
	}
}		
	if(encontrado != 0){
       printf("O valor %d esta na linha %d e na coluna %d", n, pos, pos1);
    }else{
    	printf("Seu número não foi encontrado");
	}
	
	getch();
}
