#include<stdio.h>
#include<stdlib.h>

void calculate_matrice(int** matrice_a, int* matrice_b){

}
void main(){
	int** matrice = (int**)malloc(sizeof(int*) * 2);
	for(int i = 0; i < 2; i++){
		matrice[i] = (int*)malloc(sizeof(int) * 2);
	}
	int* matrice_helper = (int*)malloc(sizeof(int) * 2);
	for(int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			printf("give input for [%d][%d]\n", i+1, j+1);
			if(scanf("%d", &matrice[i][j]) && matrice[i][j] == 0){
				printf("rejected");
			}
		}
	}
	printf("working\n");	
	getchar();
}
