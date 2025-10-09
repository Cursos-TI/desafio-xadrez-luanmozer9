#include <stdio.h>
void movimentotorre (int casas){//torre: 5 casas direita
    if (casas > 0)
    {
        printf("DIREITA\n");
        movimentotorre (casas - 1);
        printf("\n");
    }
} 

void movimentorainha (int casas){//rainha: 8 casas esquerda
    if (casas > 0)
    {
        printf("ESQUERDA\n");
        movimentorainha(casas -1);
        printf("\n");
    }
}


int main (){
        printf("Movimento TORRE\n");
        movimentotorre (5);
        printf("Movimento RAINHA\n");
        movimentorainha(8);

        printf("Movimento BISPO\n");//bispo: 5 casas diagonal cima e a direita
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j == 1; j++)
            {
                printf("DIREITA\n");
            }
        printf("CIMA\n");
        }
        
        printf("\n");
        printf("Movimento CAVALO\n");//cavalo duas casas para cima e uma para a direita
        for (int i = 1; i <= 1; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                if (j==2)break;
                printf("CIMA\n");
            }
        printf("DIREITA\n");
        }   
        
         
return 0;

}