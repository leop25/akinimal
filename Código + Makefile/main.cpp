#include <iostream>
#include <cstring>

#include "tree.h"

using namespace std;

int main() {

    Arvore T;
    Item I;

    cout << "████████████████████████████████████████████████ BEM VINDO AO JOGO \"Akinimal!\"! ███████████████████████████████████████████████████" << endl;
    cout << "█ Olá! Eu sou o gênio do Safari! Seja bem vindo ao meu jogo! Aqui você pensa em um animal e eu tenho que adivinhá-lo!             █" << endl <<
            "█ Eu não conheço muuuitos animais, mas se eu não souber posso aprender no futuro!                                                 █" << endl
         << "█                                                                                                                                 █" << endl
         << "█ Até o momento o jogo contém poucos animais, é fácil inserir mais, mas por enquanto o jogo tem propósito apenas de mostrar uma   █" << endl
         << "█ implementação de árvore como mecânica.                                                                                          █" << endl
         << "█                                                     PENSE EM UM ANIMAL                                                          █" << endl
         << "███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████" << endl << endl;


    //Cria a Árvore
    cria(T);

    // Raiz
    I.Chave = "░▒▒▒▓▓ Tem asas?";
    raiz(&T,I);

    // Profundidade 1
    I.Chave = "░▒▒▒▓▓ É grande?";
    right(T,I);
    I.Chave = "░▒▒▒▓▓ É marinho?";
    left(T,I);

    // Profundidade 2
    I.Chave = "░▒▒▒▓▓ É doméstico?";
    left(T->esq,I);
    I.Chave = "░▒▒▒▓▓ É grande?";
    right(T->esq,I);
    I.Chave = "░▒▒▒▓▓ É um dos símbolos do Brasil?";
    left(T->dir,I);
    I.Chave = "░▒▒▒▓▓ É o maior do Brasil?";
    right(T->dir,I);

    // Profundidade 3
    I.Chave = "░▒▒▒▓▓ Quer dominar o mundo?";
    right(T->esq->esq,I);
    I.Chave = "░▒▒▒▓▓ É o Rei da Selva?";
    left(T->esq->esq,I);
    I.Chave = "░▒▒▒▓▓ Infla quando se sente em perigo?";
    left(T->esq->dir,I);
    I.Chave = "░▒▒▒▓▓ É agressivo?";
    right(T->esq->dir,I);
    I.Chave = "░▒▒▒▓▓███ EMA?";
    right(T->dir->dir,I);
    I.Chave = "░▒▒▒▓▓███ AVESTRUZ?";
    left(T->dir->dir,I);
    I.Chave = "░▒▒▒▓▓███ CANÁRIO?";
    right(T->dir->esq,I);
    I.Chave = "░▒▒▒▓▓ É famoso pelo seu bico?";
    left(T->dir->esq,I);

    // Profundidade 4
    I.Chave = "░▒▒▒▓▓███ LEÃO?";
    right(T->esq->esq->esq,I);
    I.Chave = "░▒▒▒▓▓ É listrado?";
    left(T->esq->esq->esq,I);
    I.Chave = "░▒▒▒▓▓ É doméstico?";
    left(T->esq->dir->esq,I);
    I.Chave = "░▒▒▒▓▓███ BAIACU?";
    right(T->esq->dir->esq,I);
    I.Chave = "░▒▒▒▓▓███ PAPAGAIO?";
    left(T->dir->esq->esq,I);
    I.Chave = "░▒▒▒▓▓███ TUCANO?";
    right(T->dir->esq->esq,I);
    I.Chave = "░▒▒▒▓▓███ TUBARÃO?";
    right(T->esq->dir->dir,I);
    I.Chave = "░▒▒▒▓▓███ BALEIA?";
    left(T->esq->dir->dir,I);
    I.Chave = "░▒▒▒▓▓███ CACHORRO?";
    left(T->esq->esq->dir,I);
    I.Chave = "░▒▒▒▓▓███ GATO?";
    right(T->esq->esq->dir,I);

    // Profundidade 5
    I.Chave = "░▒▒▒▓▓ É típico do Brasil?";
    left(T->esq->esq->esq->esq,I);
    I.Chave = "░▒▒▒▓▓███ ZEBRA?";
    right(T->esq->esq->esq->esq,I);
    I.Chave = "░▒▒▒▓▓███ PEIXE DOURADO?";
    right(T->esq->dir->esq->esq,I);
    I.Chave = "░▒▒▒▓▓███ TRAÍRA?";
    left(T->esq->dir->esq->esq,I);

    // Profundidade 6
    I.Chave = "░▒▒▒▓▓███ DONALD TRUMP?";
    left(T->esq->esq->esq->esq->esq,I);
    I.Chave = "░▒▒▒▓▓███ ONÇA PINTADA?";
    right(T->esq->dir->esq->esq->esq,I);


    visita(T);

    return 0;

}
