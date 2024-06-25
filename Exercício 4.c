#include <stdio.h>
int recuperar (){
int cemig;
while (cemig <=100){
    printf("Recuperando energia....(%d%%)\n", cemig);
    cemig+=2;
}
    printf("Sua energia está no maximo!");
    return cemig;
}
int main(){
recuperar();
return 0;
}