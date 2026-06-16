# sesi_lop_vetores_e_matrizes_senai2026

## Vetores

Um vetor é uma estrutura de dados que armazena uma coleção de elementos do mesmo tipo. Em muitas linguagens de programação, os vetores são implementados como arrays, que são blocos contíguos de memória.

## Matrizes

Uma matriz é uma estrutura de dados bidimensional (ou multidimensional) que armazena elementos em linhas e colunas. Assim como os vetores, as matrizes também armazenam elementos do mesmo tipo.

## Tecnologias

- Linguagem C
- DevC++
  
## Como Testar
- Clone o repositório
- Abra o arquivo .c com o DevC++
- Pressione F11 para compilar e executar
  
## Exercícios

1) Crie uma matriz de 5 por 5 com números randômicos de 0 a 100 e mostre na tela.
2) Crie um vetor com 25 números randômicos de 0 a 100 e mostre na tela.
3) Reescreva o programa da atividade 2 e mostre também o maior número aleatório gerado e em qual posição do vetor se encontra.
4) Reescreva o programa da atividade 1 e mostre também o menor número aleatório gerado e em qual posição do vetor se encontra.
5) Reescreva o programa da atividade 2 e peça ao usuário para informar um número e verifique se este número está no vetor, caso positivo.
informe em qual posição do vetor ele está, senão informe que o número não foi encontrado.
6) Reescreva o programa da atividade 1 e peça ao usuário para informar um número e verifique se este número está na matriz, caso positivo.
informe em qual posição do vetor ele está, senão informe que o número não foi encontrado.
7) Reescreva o programa da atividade 2 e peça ao usuário para informar se deseja ver os números em ordem 1. crescente ou 2. decrescente, ordene e mostre conforme escolha do usuário.
8) Desenvolva um programa que permita ao usuário inserir elementos em um vetor de 5 números inteiros e depois exiba os elementos em ordem inversa.
9) Desenvolva um programa que permita ao usuário inserir elementos (números reais) em uma matriz de 3 por 3 e depois exiba os elementos em ordem inversa.
10) Desenvolva um programa que permita ao usuário inserir nomes em um vetor de 5 elementos e depois exiba todos os nomes.
11) Desenvolva um programa que permita ao usuário inserir 10 números inteiros e depois mostre em ordem crescente.
12) Reescreva o programa anterior, porem exibindo os números em ordem decrescente.
13) Desenvolva um programa que permita ao usuário inserir 10 números inteiros e depois mostre o maior e o menor número inserido.
14) Reescreva o programa anterior, porem mostrando a posição do maior e do menor número inserido.
15) Desenvolva um programa que permita ao usuário inserir 5 nomes e depois exiba todos os nomes em ordem alfabética.

## Programas em c

### Exercício 1
``` C
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(){
	int matriz[5][5];
		srand(time(NULL));
	
	for(int i = 0; i < 5; i++){ 
		for(int j = 0; j < 5; j++){ 
		    matriz[i][j] = rand() % 101;
			printf(" %d", matriz[i][j]);
		}
	 printf("\n");
	}
	getch();
}
```

### Exercício 2
``` C
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
```

### Exercício 3
``` C
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
```

## Exercício 4
``` C
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
```

## Exercício 5
``` C
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
```

## Exercício 6
```C
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
```

## Exercício 7
``` C
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
```

## Exercício 8
```C
#include <stdio.h>
#include <windows.h>
#include <string.h>

void main(){
	
	char vet[5][20];
	char nome[20];
	SetConsoleOutputCP(CP_UTF8);
	
	for(int i = 0; i<5; i++){
		printf("digite o %dº nome: ", i+1);
		scanf("%s", &nome);
		strcpy(vet[i], nome);
	}
	for(int i = 0; i<5; i++){
		printf("%s ", vet[i]);
	}
	getch();
}
```
## Exercício 9
```C
#include <stdio.h>
#include <windows.h>
#include <string.h>
void main(){
	char vet[5][20];
	char nome[20];
	SetConsoleOutputCP(CP_UTF8);
	for(int i = 0; i<5; i++){
		printf("digite o %dº nome: ", i+1);
		scanf("%s", &nome);
		strcpy(vet[i], nome);
	}
	for(int i = 0; i<5; i++){
		printf("%s ", vet[i]);
	}
	getch();
}
```

## Exercício 10
```C
#include <stdio.h>
#include <windows.h>
#include <string.h>
void main(){
	char vet[5][20];
	char nome[20];
	SetConsoleOutputCP(CP_UTF8);
	for(int i = 0; i<5; i++){
		printf("digite o %dº nome: ", i+1);
		scanf("%s", &nome);
		strcpy(vet[i], nome);
	}
	for(int i = 0; i<5; i++){
		printf("%s ", vet[i]);
	}
	getch();
}
```

## Exercício 11
``` C
#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int vet[10];
	int num, temp;
	for(int i = 0; i<10; i++){
		printf("Digite o %dº número:", i+1);
		scanf("%d", &num);
		vet[i] = num;
	}
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			if(vet[i]>vet[j]){
				temp = vet[j];
				vet[j] = vet[i];
				vet[i] = temp;
			}
		}
	}
	for(int i = 0; i<10; i++){
		printf("%d ", vet[i]);
	}
	getch();
}
```

## Exercício 12
```C
#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int vet[10];
	int num, temp;
	for(int i = 0; i<10; i++){
		printf("Digite o %dº número:", i+1);
		scanf("%d", &num);
		vet[i] = num;
	}
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			if(vet[i]<vet[j]){
				temp = vet[j];
				vet[j] = vet[i];
				vet[i] = temp;
			}
		}
	}
	for(int i = 0; i<10; i++){
		printf("%d ", vet[i]);
	}
	getch();
}
```

## Exercício 13
```C
#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int vet[10];
	int maior = 0, menor = 100;
	int num;
	for(int i=0; i<10; i++){
		printf("Digite o %dº número: ", i+1);
		scanf("%d", &num);
		vet[i] = num;
	}
	for(int i=0; i<10; i++){
		if(vet[i]>maior){
			maior = vet[i];
		}
	}
	for(int i=0; i<10; i++){
		if(vet[i]<menor){
			menor = vet[i];
		}
	}
	printf("O maior número é: %d\nO menor número é: %d", maior, menor);
	getch();
}
```

## Exercício 14
```C
#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int vet[10];
	int maior = 0, menor = 100;
	int num, posx, posy;
	for(int i=0; i<10; i++){
		printf("Digite o %dº número: ", i+1);
		scanf("%d", &num);
		vet[i] = num;
	}
	for(int i=0; i<10; i++){
		if(vet[i]>maior){
			maior = vet[i];
			posx = i;
		}
	}
	for(int i=0; i<10; i++){
		if(vet[i]<menor){
			menor = vet[i];
			posy = i;
		}
	}
	printf("\nO maior número é: %d\nO menor número é: %d", maior, menor);
	printf("\nA posição do Maior é: %d\nA posição do Menor é %d", posx+1, posy+1);
	getch();
}
```

## Exercício 15
``` C
#include <stdio.h>
#include <windows.h>
#include <string.h>
void main(){
	char vet[5][20];
	char nome[20];
	SetConsoleOutputCP(CP_UTF8);
	for(int i = 0; i<5; i++){
		printf("digite o %dº nome: ", i+1);
		scanf("%s", &nome);
		strcpy(vet[i], nome);
	}
	for(int i = 0; i<5; i++){
		printf("%s ", vet[i]);
	}
	getch();
}
```

 
