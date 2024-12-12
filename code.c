#include<stdio.h>
#include<stdlib.h>

void calculate_matrice(int** matrice_a, int* matrice_b){
	int W = matrice_a[0][0] * matrice_a[1][1] - matrice_a[1][0] * matrice_a[0][1];
	int Wx = matrice_b[0] * matrice_a[1][1] - matrice_a[1][0] *  matrice_b[1];
	int Wy = matrice_a[0][0] * matrice_b[1] - matrice_b[0] * matrice_a[0][1];
	if(W != 0){
		printf("W: %d \n" , W);
		printf("Wx: %d \n", Wx);
		printf("Wy: %d \n", Wy);
		double x = (double)Wx/W;
		double y = (double)Wy/W;
		printf("Rozwiazaniem ukladu rownan sa x = %lf oraz y = %lf \n", x, y);
	}
	else{
		if(Wx == 0 && Wy == 0){
			printf("Uklad ma nieskonczenie wiele rozwiazan \n");
		}
		else{
			printf("Uklad jest sprzeczny \n");
		}
	}
}
void main(){
	int** matrice = (int**)malloc(sizeof(int*) * 2);
	for(int i = 0; i < 2; i++){
		matrice[i] = (int*)malloc(sizeof(int) * 2);
	}
	int* matrice_helper = (int*)malloc(sizeof(int) * 2);
	for(int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++){
			printf("wprowadz wartosc do macierzy [%d][%d]\n", i+1, j+1);
			if(!scanf("%d", &matrice[i][j])){
				printf("zly input");
			}
		}
	}
	for(int i = 0; i < 2; i++){
		if(!scanf("%d", &matrice_helper[i])){
			printf("zly input \n");
		}
	}
	calculate_matrice(matrice, matrice_helper);	
	getchar();
}
