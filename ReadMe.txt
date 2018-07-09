Feito por: Leonardo Penna de Lima
RA - 726559

SOBRE O JOGO:

• O objetivo do jogo é pensar em um animal que o gênio não consiga adivinhar através das perguntas que ele te faz.

• No momento existem poucos animais, mas com a implementação de um banco de dados é possível ampliar esse número conforme cada jogada.


MODULARIZAÇÃO DO CÓDIGO:

main.cpp:
• Dividido em: 
	• Apresentação do jogo
	• Montagem da árvore
	• Funcionamento do jogo
tree.h:
• Dividido em:
	• Declaração de funções da estrutura de árvore e de atributos do jogo
	• Declaração de funções da mecânica do jogo

tree.cpp:
• Dividido em:
	• Funcionamento das funções da estrutura de árvore
	• Funcionamento da mecânica do jogo


COMO COMPILAR:
• Compilação direta: g++ -o Akinimal main.cpp tree.cpp
 -> Rodar o executável gerado  
• Makefile: make -f makefile.dms
 -> Rodar o executável gerado



 

 