#include <stdio.h>
char* eh_par_ou_impar(int numero){
    if (numero % 2 == 0) {
        return "eh par";
    } else {
        return "eh impar";
    }
}

int soma_algarismos(int numero){
    int soma = 0;
    while (numero > 0){
        int digito = numero % 10;
        soma += digito;
        numero /= 10;
    }
    return soma;
}

int main(){
    int N;
    
    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);
    
    char* resultado_paridade = eh_par_ou_impar(N);

    int soma = soma_algarismos(N);

    printf("%d %s\n", N, resultado_paridade);
    printf("A soma dos algarismos de %d eh igual a %d\n", N, soma);

    return 0;
}
