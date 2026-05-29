#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main(){

    int m1, m2;

    //Movimentação do Bispo
  
    printf("===== Movimentaçã do Bispo =====\n");
  
    for(m1 = 1; m1 <= 3; m1++){
        printf("Movendo para cima.\n"); //Faz com que eecute a 1° movimentação necessária.
    }
    for (m2 = 1; m2 <= 3; m2++){
        printf("Movendo para direita.\n"); //Faz com que eecute a 2° movimentação necessária.
    }


    //Movimentação da Torre

    printf("===== Movimentação da Torre =====\n");

    for(m1 = 1; m1 <= 3; m1++){
        printf("Movendo para frente.\n"); //Faz com que eecute a movimentação necessária.
    }

    //Movimentação da Rainha

    printf("===== Movimentação da Rainha =====\n");

    for(m1 = 1; m1 <= 6; m1++){
        printf("Movendo para esquerda.\n"); //Faz com que eecute a movimentação necessária.
    }

    return 0;

}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
