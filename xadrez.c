#include <stdio.h>
int main(){

    //torre: 5 casas direita, bispo: 5 casas diagonal cima e a direita, rainha: 8 casas esquerda, Cavalo: duas pra baixo e uma pra esquerda.
    int peca, i = 1, movimento_completo = 1;
        
        printf("===Escolha uma peça para movimentá-la===\n");
        printf("1.Torre\n");
        printf("2.Bipo\n");
        printf("3.Rainha\n");
        printf("4.Cavalo\n");
        scanf("%d", &peca);

        switch (peca)
        {
        case 1:
            printf("Você selecionou TORRE\n");
            while (i<=5)
            {
                printf("Direita\n");
                i++;                
            }
            break;
        case 2:
            printf("Voce selecionou BISPO\n");
            for (int i = 1; i == 1; i++)
            {
                for (int j = 1; j <= 5; j++)
                {
                    printf("Cima\n");
                }
                printf("Direita\n");                
            }
            
           
            break;
        case 3:
            printf("Você selecionou RAINHA\n");
            for ( i; i <= 8; i++)
            {
                printf("Esquerda\n");
            }
            break;
        case 4:
            printf("Você selecionaou CAVALO\n");
            while (movimento_completo--)
            {
                for (int i = 1; i <= 2; i++)
                {
                    printf("Baixo\n");
                }
                printf("Esquerda\n");
            }
            break;
        default:
            printf("Opção inválida\n");
            break;
        }

}