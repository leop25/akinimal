#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <cstring>

using namespace std;

typedef string chave;

typedef struct {
    chave Chave;
} Item;

typedef struct Node {
    Item Item;
    struct Node *esq, *dir;
    string pergunta;
    char opt;
    int cont;

} Node;

typedef struct Node *Ponteiro;
typedef Ponteiro Arvore;


void cria(Arvore A);
void raiz(Arvore *A, Item I);
void right(Arvore A, Item I);
void left(Arvore A, Item I);
void visita(Arvore A);


#endif
