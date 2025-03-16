#include <stdio.h>
#include <stdbool.h>

const char SOL11 = 'A';
const char SOL12 = 'a';
const char SOL21 = 'P';
const char SOL22 = 'P';
const int SOL3 = 150000000;


char preguntar1() {
    char resp1;
    printf("1. ¿Qué día es Navidad?\n");    
    printf("A. 25 de diciembre\n");    
    printf("B. 5 de mayo\n");    
    printf("C. 18 de abril\n");
    
    scanf("%s", &resp1); 
    while (resp1 != 'A' && resp1 != 'B' && resp1 != 'C' && resp1 != 'a' && resp1 != 'b' && resp1 != 'c') {
        printf("Por favor, elegí entre las 3 opciones (A, B, C)\n");
        scanf("%s", &resp1);
    }
    
    return resp1; 
}

char preguntar2(){
    char resp2;
    printf("2. ¿Qué dinosaurio podía volar?\n");    
    printf("- Tiranosaurio Rex (T)\n");    
    printf("- Pterodactylus (P)\n");    
    printf("- Brachiosaurus (B)\n");
    
    scanf("%s", &resp2); 
    while (resp2 != 'T' && resp2 != 'P' && resp2 != 'B' && resp2 != 't' && resp2 != 'p' && resp2 != 'b') {
        printf("Por favor, elegí entre las 3 opciones (T, P, B)\n");
        scanf("%s", &resp2);
    }
    
    return resp2; 
}

int preguntar3(){
    int resp3;
    printf("3. En km, ¿A qué distancia está el Sol (la estrella, no Diaz Real) de la Tierra? (esta pregunta no tiene opciones, se ingresa el número de la distancia).\n");
    scanf("%d", &resp3); 
    while (resp3 < 0 ) {
        printf("La distancia tiene que ser, minimamente, un numero mayor o igual a 0.\n");
        scanf("%d", &resp3);
    }
}

int correccion(char resp1, char resp2, int resp3){
    int resp_correctas = 0;

    if (resp1==SOL11 || resp1==SOL12)
    {
        resp_correctas+=1;
    }
    if (resp2==SOL21 || resp2==SOL22) {
        resp_correctas+=1;
    }    
    if (resp3==SOL3){
        resp_correctas+=1;
    }
    return resp_correctas;
}
void mostrar_nota(int resp_correctas){
    if (resp_correctas==3){
        printf("Te sacaste un 10.");
    }
    if (resp_correctas==2){
        printf("Te sacaste un 7.");
    }
    if (resp_correctas==1){
        printf("Te sacaste un 4.");
    }
    else{
        printf("Te sacaste un 1.");
    }
}
int main(){
    char r1 = preguntar1();
    char r2 = preguntar2();
    int r3 = preguntar3();

    int correctas = correccion(r1, r2, r3);
    mostrar_nota(correctas);
    return 0;
}