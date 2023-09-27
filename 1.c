#include <stdio.h>
int main() {
int ano;

printf("Digite o ano: ");
scanf("%d", &ano);
    
    int copa_mundo = 0;
    if (ano >= 1930 && (ano - 1930) % 4 == 0){
        copa_mundo = 1;
    }
    int jogosOlimpicos = 0;
    if (ano >= 1896 && (ano - 1896) % 4 == 0){
        jogosOlimpicos = 1;
    }
    if (copa_mundo && jogosOlimpicos){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d\n",ano);
    } else if (copa_mundo && jogosOlimpicos){
        printf("Os Jogos Olimpicos de Verao e a Copa do Mundo de Futebol ocorreram no ano de %d\n",ano);
    } else if (copa_mundo){
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d\n",ano);
    } else if (jogosOlimpicos){
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d\n",ano);
    }

    return 0;
}
