#include <stdio.h>
char fogo(){
    char aceitar = 's';
    while(aceitar == 's'){
        printf("\n");
    printf("ATENÇÃO POPULACÃO, A CIDADE ESTÁ PEGANDO FOGO!!\n");
    printf("Ir para local seguro?\n");
    
    scanf("%s", &aceitar);
    printf("As chamas foram controladas!");
    
    }
    
    return aceitar;
    
}
int main()
{
    fogo();
    return 0;
}