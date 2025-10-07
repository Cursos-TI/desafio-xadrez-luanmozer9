#include <stdio.h>
int main(){

    //torre: 5 casas direita, bispo: 5 casas diagonal cima e a direita, rainha: 8 casas esquerda 
    int peca, i = 1;
    
        printf("===Escolha uma peça para movimentá-la===\n");
        printf("1.Torre\n");
        printf("2.Bipo\n");
        printf("3.Rainha\n");
        scanf("%d", &peca);

        switch (peca)
        {
        case 1:
            printf("Você selecionou TORRE\n");
            while (i<=5)
            {
                printf("Esquerda\n");
                i++;                
            }
            break;
        case 2:
            printf("Você selecionou BISPO\n");
            do
            {
                printf("Cima á Direita\n");
                i++;
            } while (i <= 5); 
            break;
        case 3:
            printf("Você selecionou RAINHA\n");
            for ( i; i <= 8; i++)
            {
                printf("Esquerda\n");
            }
            break;
        default:
            printf("Opção inválida\n");
            break;
        }

}