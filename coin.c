#include <stdio.h>

int main() {
    int moedas;
    int rodadas = 0;
    int totalMoedas = 0;
    char usuario[25];

    while (moedas < 100)
    {   
        printf("Em que rodada estamos: ");
        scanf("%d", &rodadas);
        printf("Digite o valor da quantidade de moedas na rodada: ");
        scanf("%d", &moedas);

        totalMoedas += moedas;
    }
    

    return 0;
}
