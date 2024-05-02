#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PESSOAS 10
#define TAM_NOME 50
#define TAM_TELEFONE 15

typedef struct {
    int codigo;
    char nome[TAM_NOME];
    char telefone[TAM_TELEFONE];
} Pessoa;

Pessoa pessoas[MAX_PESSOAS];
int total_pessoas = 0;

void cadastrar();
void listar();
void editar();
void excluir();
void ordenar_por_nome();
void limpar_buffer();

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("[1] Cadastrar\n");
        printf("[2] Listar\n");
        printf("[3] Editar\n");
        printf("[4] Excluir\n");
        printf("[5] Ordenar por nome\n");
        printf("[0] Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        limpar_buffer();

        switch(opcao) {
            case 1:
                cadastrar();
                break;
            case 2:
                listar();
                break;
            case 3:
                editar();
                break;
            case 4:
                excluir();
                break;
            case 5:
                ordenar_por_nome();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 0);

    return 0;
}

void cadastrar() {
    if(total_pessoas < MAX_PESSOAS) {
        Pessoa nova_pessoa;

        printf("Digite o codigo: ");
        scanf("%d", &nova_pessoa.codigo);
        limpar_buffer();

        printf("Digite o nome: ");
        fgets(nova_pessoa.nome, TAM_NOME, stdin);
        nova_pessoa.nome[strcspn(nova_pessoa.nome, "\n")] = '\0';

        printf("Digite o telefone: ");
        fgets(nova_pessoa.telefone, TAM_TELEFONE, stdin);
        nova_pessoa.telefone[strcspn(nova_pessoa.telefone, "\n")] = '\0';

        pessoas[total_pessoas++] = nova_pessoa;
        printf("Pessoa cadastrada com sucesso!\n");
    } else {
        printf("Limite de pessoas atingido!\n");
    }
}

void listar() {
    if(total_pessoas > 0) {
        printf("Lista de pessoas cadastradas:\n");
        for(int i = 0; i < total_pessoas; i++) {
            printf("Codigo: %d, Nome: %s, Telefone: %s\n", pessoas[i].codigo, pessoas[i].nome, pessoas[i].telefone);
        }
    } else {
        printf("Nenhuma pessoa cadastrada!\n");
    }
}

void editar() {
    int codigo;
    printf("Digite o codigo da pessoa que deseja editar: ");
    scanf("%d", &codigo);
    limpar_buffer();

    int encontrado = 0;
    for(int i = 0; i < total_pessoas; i++) {
        if(pessoas[i].codigo == codigo) {
            printf("Digite o novo nome: ");
            fgets(pessoas[i].nome, TAM_NOME, stdin);
            pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';

            printf("Digite o novo telefone: ");
            fgets(pessoas[i].telefone, TAM_TELEFONE, stdin);
            pessoas[i].telefone[strcspn(pessoas[i].telefone, "\n")] = '\0';

            printf("Pessoa editada com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if(!encontrado) {
        printf("Pessoa nao encontrada!\n");
    }
}

void excluir() {
    int codigo;
    printf("Digite o codigo da pessoa que deseja excluir: ");
    scanf("%d", &codigo);
    limpar_buffer();

    int encontrado = 0;
    for(int i = 0; i < total_pessoas; i++) {
        if(pessoas[i].codigo == codigo) {
            for(int j = i; j < total_pessoas - 1; j++) {
                pessoas[j] = pessoas[j + 1];
            }
            total_pessoas--;
            printf("Pessoa excluida com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if(!encontrado) {
        printf("Pessoa nao encontrada!\n");
    }
}

void ordenar_por_nome() {
    if(total_pessoas > 1) {
        for(int i = 0; i < total_pessoas - 1; i++) {
            for(int j = i + 1; j < total_pessoas; j++) {
                if(strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                    Pessoa temp = pessoas[i];
                    pessoas[i] = pessoas[j];
                    pessoas[j] = temp;
                }
            }
        }
        printf("Pessoas ordenadas por nome!\n");
    } else {
        printf("Nao ha pessoas suficientes para ordenar!\n");
    }
}

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}
