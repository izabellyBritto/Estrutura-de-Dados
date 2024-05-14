#include <stdio.h>
#define N 5

struct Produto
{
    int codigo;
    char produto[10];
    float preco;
};

typedef struct Produto Produto;

int menu(int *opcao);
int inserirInicio(Produto listaLinear[], int IA, int FA, int *IL, int *FL, Produto infoNodo);
int mostrarLista(Produto listaLinear[], int IA, int FA, int IL, int FL);

int main()
{
    Produto listaLinear[N], infoNodo;
    int IA = 0, FA = N - 1, IL = -1, FL = -1, opcao;
    do
    {
        menu(&opcao);
        switch (opcao)
        {
        case 1:
            printf("Inserindo no início...\n");
            printf("Código..: "); scanf("%d",&infoNodo.codigo);
            printf("Produto.: "); scanf("%s",infoNodo.produto);
            printf("Preço...: "); scanf("%f",&infoNodo.preco);
            inserirInicio(listaLinear, IA, FA, &IL, &FL, infoNodo);
            break;
        case 2:
            printf("Mostrando...\n");
            mostrarLista(listaLinear, IA, FA, IL, FL);
            break;
        case 0:
            printf("Tchau! Já vai tarde...\n");
            break;
        default:
            printf("Opção inválida! Animal!\n");
            break;
        }
    } while (opcao != 0);
}

int menu(int *opcao)
{
    printf(":::::::: M E N U ::::::::\n");
    printf("[1] Inserir no início\n");
    printf("[2] Mostrar\n");
    printf("[0] Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", opcao);
    return 0;
}

int inserirInicio(Produto listaLinear[], int IA, int FA, int *IL, int *FL, Produto infoNodo){
    if (IA == *IL && FA == *FL) 
        return 1;
    else 
    {
        if (*IL == -1)
            *IL = *FL = IA;
        else if (*IL > IA)
            *IL = *IL-1;                  
        else 
        {       
            for (int i=*FL; i>=*IL; i--)
                listaLinear[i+1] = listaLinear[i];
            *FL = *FL+1;
        }
        listaLinear[*IL] = infoNodo;
        return 0;
    }
}

int mostrarLista(Produto listaLinear[], int IA, int FA, int IL, int FL){
    for(int i=IA; i<=FA; i++){
        if(i>=IL && i<=FL)
            printf("%3d - %5.1f - %s\n", listaLinear[i].codigo, listaLinear[i].preco, listaLinear[i].produto);
        else
            printf("-------\n");
    }
    return 0;
}