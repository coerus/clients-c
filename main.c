#include "cliente.h"

int main() {
  int numClientes;
  Cliente *clientes = lerClientes("clientes.txt", &numClientes);

  int opc, continua = 1;
  while (continua) {

    Menu(clientes, &opc);

    switch (opc) {
    case 1:

      printf("Digite os dados do novo cliente:\n");
      Dados_Clientes(clientes, numClientes);
      numClientes++;
      break;
    case 2:

      printf("\nClientes antes da ordenação:\n");
      imprimirClientes(clientes, numClientes);

      shellSort(clientes, numClientes);

      printf("\nClientes ordenados:\n");
      imprimirClientes(clientes, numClientes);

      printf("\nDigite algo para continuar...\n");
      
      char digite;
      
      scanf("%s", &digite);

      break;
    case 3:
      shellSort(clientes, numClientes);
      escreverClientes(clientes, numClientes);
      printf("Saindo...\n");
      free(clientes);
      return 0;
    default:
      printf("Opção inválida!\n");
    }
  }

  return 0;
}

