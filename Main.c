#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
    char m[3][3] = { //[linha][coluna]
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
    }; 
    char x = 'X', o = 'O', q;
    int p, pos, c = 0;
    bool z = true;

    while(q != 'q'){
        for(int i = 2; i > -1; i--){
            for(int j = 0; j < 3; j++){
                if(j < 2){
                    printf(" %c |", m[i][j]);
                }else{
                    printf(" %c\n", m[i][j]);
                }
            }
        }
        do{
            if(c % 2 == 0){
                printf("Escolha uma posição (y, x) para 'X'.\n");
            }else{
                printf("Escolha uma posição (y, x) para 'O'.\n");
            }
            scanf("%d", &p); //coluna
            scanf("%d", &pos); //linha
            z = true;
                if(p > 3 || pos > 3 /*|| m[p][pos] == 'X' || m[p][pos] == 'O'*/){
                    printf("Posição inválida. Jogue novamente.\n");
                    z = false;
                }
        }while(z == false);

        if(c % 2 == 0){
            m[p-1][pos-1] = x;
        }else{
            m[p-1][pos-1] = o;
        }
        c++;

        printf("Pressione qualquer tecla para continuar, 'q' termina.\n");
        q = getchar(); //Como que isso aqui acontece durante toda a execução do código???
        system("clear");
    }
    printf("Fim de jogo!\n");
    for(int i = 2; i > -1; i--){
        for(int j = 0; j < 3; j++){
            if(j < 2){
                printf(" %c |", m[i][j]);
            }else{
                printf(" %c\n", m[i][j]);
            }
        }
    }
}