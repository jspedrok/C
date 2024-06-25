#include <stdio.h>
char habilidade(){
    char aceitar = 's';
    while(aceitar == 's'){
        printf("\n");
    printf("Deseja usar habilidade?\n");
    scanf("%s", &aceitar);
    printf("Voce usou a habilidade!");
    
    }
    
    return aceitar;
    
}
int main()
{
    habilidade();
    return 0;
}