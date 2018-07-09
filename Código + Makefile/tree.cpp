#include <iostream>
#include <stdlib.h>
#include "tree.h"

using namespace std;

int endGame = 0;

void cria(Arvore A) {
    A = NULL;
}

void raiz(Arvore *A, Item I) {

    *A = (Arvore) malloc(sizeof(Node));

    (*A)->Item = I;
    (*A)->esq = NULL;
    (*A)->dir = NULL;

}

void right(Arvore A, Item I) {
    //verificar
    raiz(&(A->dir),I);
}

void left(Arvore A, Item I) {
    //verificar
    raiz(&(A->esq),I);
}

void visita(Arvore A) {
    while(endGame == 0){
        cout << A->Item.Chave << endl;
        cout << "░▒▒▓▓██╠ ";
        cin >> A->opt;
        if(toupper(A->opt) == 'S' && A->esq == NULL){
            cout << "░▒▒▒▓▓▓▓████████████ GANHEI!!!! █████████████▓▓▓▓▒▒▒░" << endl;
            endGame = 1;
        }else if(toupper(A->opt) == 'N' && A->esq == NULL){
            cout << "█████████████▓▓▓▓▒▒▒░ PERDI... ░▒▒▒▓▓▓▓████████████" << endl;
            endGame = 1;
        }else{
            if(toupper(A->opt) == 'S'){
                visita(A->dir);
            }else{
                visita(A->esq);
            }
        }
    }
}