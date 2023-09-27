#include <stdio.h>

int main() {
char nivel;
double salario, aumento, salario_atualizado;

scanf("%c", &nivel);
scanf("%lf", &salario);

    if (nivel == 'a'){
        aumento = salario * 0.05;
    } else if (nivel == 'b'){
        aumento = salario * 0.07;
    } else if (nivel == 'c'){
        aumento = salario * 0.08;
    } else{
        printf("Nivel de experiencia invalido!\n");
        return 1;
    }
    salario_atualizado = salario + aumento;
    printf("R$ %.2lf\n", salario_atualizado);

    return 0;
}
