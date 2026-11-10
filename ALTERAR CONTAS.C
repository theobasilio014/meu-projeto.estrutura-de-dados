#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "BANCARIO.h"

void altera_contas(TipoApontador_conta lista) {
    int codigo;
    desenha_moldura("ALTERACAO DE CONTAS BANCARIAS");

     if (lista == NULL) {
        escreve_mensagem("Nenhuma conta cadastrada! Pressione tecla para sair...");
        getch();
        return;
        escreve_mensagem("Digite o Codigo da conta para alterar: ");
    gotoxy(42, 22);
    if (scanf("%d", &codigo) != 1) { fflush(stdin); return; }
TipoApontador_conta aux = lista;
    while (aux != NULL && aux->conteudo.codigo_conta != codigo) {
        aux = aux->proximo;
    }

    if (aux == NULL) {
        escreve_mensagem("Conta nao encontrada! Pressione tecla...");
        getch();
        return;
    }

    desenha_moldura("ALTERACAO DE CONTAS BANCARIAS");
    gotoxy(15, 8);  printf("Novo Banco.....: "); scanf("%s", aux->conteudo.banco);
    gotoxy(15, 10); printf("Nova Agencia...: "); scanf("%s", aux->conteudo.agencia);
    gotoxy(15, 12); printf("Novo Saldo.....: "); scanf("%f", &aux->conteudo.valor_saldo);
    gotoxy(15, 14); printf("Novo Limite....: "); scanf("%f", &aux->conteudo.valor_limite);

    escreve_mensagem("Conta alterada com sucesso! Pressione tecla...");
    getch();

    
    }
}