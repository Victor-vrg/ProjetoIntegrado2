#include <stdio.h>
#include <stdlib.h>

// Autor: Victor Resende Gualberto // 
// Data atual  : 30/10/2022  //
// Projeto integrado II   // 

int main(int argc, char *argv[]) {
	
	char nome[50];
	char endereco[60];
	char telefone[14];
    printf("digite o seu nome completo:\n");
    fgets(nome,50,stdin);
    printf("digite o seu endereco:\n");
    fgets(endereco,60,stdin);
    printf("digite o seu telefone:\n");
    fgets(telefone,14,stdin);
    printf("Seu nome é %s\nSeu endereco cadastrado: %s\nO seu numero de telefone é %s", nome,endereco,telefone);

	
	return 0;
}