#ifndef CLIENTE_H
#define CLIENTE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct clientes {
    char nome[50];
    char endereco[100];
    int ID;
} Cliente;

void Menu(Cliente *clientes, int *opc);
Cliente *lerClientes(char *nomeArquivo, int *numClientes);
void shellSort(Cliente *arr, int n);
void imprimirClientes(Cliente *clientes, int numClientes);
void Dados_Clientes(Cliente *clientes, int numClientes);
int verificarDados(const char *str);
void escreverClientes(Cliente *clientes, int numClientes);

#endif /* CLIENTE_H */

