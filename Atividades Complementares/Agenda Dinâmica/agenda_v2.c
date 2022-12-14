#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Agenda
{
  int codigo;
  char nome[50], telefone[15], email[50], nascimento[15], observacao[100];
  struct Agenda *proximo;
} Agenda;

//Declarando ponteiro raiz da lista
  Agenda *p = NULL, *aux, *ultimo;
  int i;

void listar()
{
  aux = p;

  for (int i = 0; i < 3; i++)
  {
    printf("Codigo: %i\n", aux->codigo);
    printf("Nome: %s\n", aux->nome);
    aux = aux->proximo;
  }
}

void cadastrar()
{
  

  for (i = 0; i < 3; i++)
  {

    aux = malloc(sizeof(Agenda));

    printf("Insira o codigo: ");
    fflush(stdin);
    scanf("%i", &aux->codigo);

    printf("Insira o nome: ");
    fflush(stdin);
    scanf("%s", aux->nome);

    printf("Insira o telefone: ");
    fflush(stdin);
    scanf("%s", aux->telefone);

    printf("Insira o email: ");
    fflush(stdin);
    scanf("%s", aux->email);

    printf("Insira o nascimento: ");
    fflush(stdin);
    scanf("%s", aux->nascimento);

    printf("Insira a observacao: ");
    fflush(stdin);
    scanf("%s", aux->observacao);

    aux->proximo = NULL;

    if (p == NULL)
    {
      p = aux;
      ultimo = aux;
    }
    else
    {
      ultimo->proximo = aux;
      ultimo = aux;
    }
  }
}

void menu()

{
  int op;
  while (op > 0)
  {
    printf("\n*****************************************************\n");
    printf("*                  AGENDA TELEFONICA                *\n");
    printf("*****************************************************\n");
    printf("* 1 - CADASTRAR                                     *\n");
    printf("* 2 - LISTAR                                        *\n");
    printf("* 3 - BUSCAR                                        *\n");
    printf("* 4 - ALTERAR                                       *\n");
    printf("* 5 - EXCLUIR                                       *\n");
    printf("* 0 - SAIR                                          *\n");
    printf("*****************************************************\n");

    scanf("%d", &op);

    switch (op)
    {
    case 1:
      cadastrar();
      break;
    /*/case 2:
      listar();
      break;/*/

    case 0:
      return 0;
      break;
    }
  }
}

int main()
{
  menu();
}
