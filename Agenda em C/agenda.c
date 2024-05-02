#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTATOS 10
#define MAX_NOME 50
#define MAX_TELEFONE 15

typedef struct {
    int codigo;
    char nome[MAX_NOME];
    char telefone[MAX_TELEFONE];
} Contato;

void menu();
void cadastrar(Contato agenda[], int *total_contatos);
void listar(Contato agenda[], int total_contatos);
void excluir(Contato agenda[], int *total_contatos);
void editar(Contato agenda[], int total_contatos);
void ordenar_por_nome(Contato agenda[], int total_contatos);

int main() {
    Contato agenda[MAX_CONTATOS];
    int opcao, total_contatos = 0;

    do {
        menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                printf("Saindo...\n");
                break;
            case 1:
                listar(agenda, total_contatos);
                break;
            case 2:
                cadastrar(agenda, &total_contatos);
                break;
            case 3:
                excluir(agenda, &total_contatos);
                break;
            case 4:
                editar(agenda, total_contatos);
                break;
            case 5:
                ordenar_por_nome(agenda, total_contatos);
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

void menu() {
    printf("\nAgenda - Menu:\n");
    printf("1. Listar contatos\n");
    printf("2. Cadastrar contato\n");
    printf("3. Excluir contato\n");
    printf("4. Editar contato\n");
    printf("5. Ordenar por nome\n");
    printf("0. Sair\n");
    printf("Escolha uma opção: ");
}

void cadastrar(Contato agenda[], int *total_contatos) {
    if (*total_contatos >= MAX_CONTATOS) {
        printf("Agenda cheia. Não é possível cadastrar mais contatos.\n");
        return;
    }

    Contato novo_contato;

    printf("Código: ");
    scanf("%d", &novo_contato.codigo);

    printf("Nome: ");
    scanf("%s", novo_contato.nome);

    printf("Telefone: ");
    scanf("%s", novo_contato.telefone);

    agenda[*total_contatos] = novo_contato;
    (*total_contatos)++;
}

void listar(Contato agenda[], int total_contatos) {
    if (total_contatos == 0) {
        printf("Nenhum contato cadastrado.\n");
        return;
    }

    printf("\nLista de contatos:\n");
    for (int i = 0; i < total_contatos; i++) {
        printf("Código: %d | Nome: %s | Telefone: %s\n", agenda[i].codigo, agenda[i].nome, agenda[i].telefone);
    }
}

void excluir(Contato agenda[], int *total_contatos) {
    if (*total_contatos == 0) {
        printf("Nenhum contato cadastrado para excluir.\n");
        return;
    }

    int codigo_excluir;
    printf("Digite o código do contato a ser excluído: ");
    scanf("%d", &codigo_excluir);

    int encontrado = 0;
    for (int i = 0; i < *total_contatos; i++) {
        if (agenda[i].codigo == codigo_excluir) {
            encontrado = 1;
            for (int j = i; j < *total_contatos - 1; j++) {
                agenda[j] = agenda[j + 1];
            }
            (*total_contatos)--;
            printf("Contato excluído com sucesso.\n");
            break;
        }
    }

    if (!encontrado) {
        printf("Contato não encontrado.\n");
    }
}

void editar(Contato agenda[], int total_contatos) {
    if (total_contatos == 0) {
        printf("Nenhum contato cadastrado para editar.\n");
        return;
    }

    int codigo_editar;
    printf("Digite o código do contato a ser editado: ");
    scanf("%d", &codigo_editar);

    int encontrado = 0;
    for (int i = 0; i < total_contatos; i++) {
        if (agenda[i].codigo == codigo_editar) {
            encontrado = 1;

            printf("Novo nome: ");
            scanf("%s", agenda[i].nome);

            printf("Novo telefone: ");
            scanf("%s", agenda[i].telefone);

            printf("Contato editado com sucesso.\n");
            break;
        }
    }

    if (!encontrado) {
        printf("Contato não encontrado.\n");
    }
}

void ordenar_por_nome(Contato agenda[], int total_contatos) {
    if (total_contatos == 0) {
        printf("Nenhum contato cadastrado para ordenar.\n");
        return;
    }

    for (int i = 0; i < total_contatos - 1; i++) {
        for (int j = i + 1; j < total_contatos; j++) {
            if (strcmp(agenda[i].nome, agenda[j].nome) > 0) {
                Contato temp = agenda[i];
                agenda[i] = agenda[j];
                agenda[j] = temp;
            }
        }
    }

    printf("Contatos ordenados por nome.\n");
}
