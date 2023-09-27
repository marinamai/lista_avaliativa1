#include <stdio.h>
int main() {
    int senha_cadastrada, senha_inserida;

    scanf("%d", &senha_cadastrada);

    printf("senha cadastrada: %04d\n", senha_cadastrada);

    while (1){
        scanf("%d", &senha_inserida);

        if (senha_inserida == senha_cadastrada){
            printf("senha valida!\n");
            break;
        } else{
            printf("senha invalida!\n");
        }
    }

    return 0;
}
