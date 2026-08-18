#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

// Definição de variáveis
char uf1[3], uf2[3];
char codigo1[5], codigo2[5];
char cidade1[50], cidade2[50];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontos1, pontos2;
float densidade1, densidade2;
float ppc1, ppc2;
int opcaoCarta, opcaoAtributo;
int atributo;

// Entrada de atributos - Carta 1
int entrada1(){
    
    

    printf("-------- CARTA 1 ----------\n");  
    printf("Insira o estado da primeira carta: ");
    scanf("%s", uf1);
    printf("Insira o código da primeira carta (UF + número): ");
    scanf("%s", codigo1);
    printf("Insira o nome da cidade da primeira carta: ");
    scanf("%s", cidade1);
    printf("Insira o tamanho da população da primeira carta: ");
    scanf("%d", &populacao1);
    printf("Insira o tamanho da área da primeira carta: ");
    scanf("%f", &area1);
    printf("Insira o PIB da primeira carta: ");
    scanf("%f", &pib1);
    printf("Insira o número de pontos turísticos da primeira carta: ");
    scanf("%d", &pontos1);
    calculo1();
    
}

// Entrada de atributos - Carta 2
int entrada2() {
    
    printf("-------- CARTA 2 ----------\n"); 
    printf("Insira o estado da segunda carta: ");
    scanf("%s", uf2);
    printf("Insira o código da segunda carta (UF + número): ");
    scanf("%s", codigo2);
    printf("Insira o nome da cidade da segunda carta: ");
    scanf("%s", cidade2);
    printf("Insira o tamanho da população da segunda carta: ");
    scanf("%d", &populacao2);
    printf("Insira o tamanho da área da segunda carta: ");
    scanf("%f", &area2);
    printf("Insira o PIB da segunda carta: ");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos da segunda carta: ");
    scanf("%d", &pontos2);
    calculo2();
    
}

// Cálculo dos atributos secundários
void calculo1(){

    

    densidade1 = (float)populacao1/area1;
    ppc1 = pib1/populacao1;
    populacao1 = (int)populacao1;
    
}

void calculo2(){

    densidade2 = (float)populacao2/area2;
    ppc2 = pib2/populacao2;
    populacao2 = (int)populacao2;
}

// Menu
int menu(){
    
    printf("---------- SUPER TRUNFO ----------\n");
    
    printf("Cadastre suas cartas:\n");
    printf("1. Começar pela CARTA 1\n");
    printf("2. Começar pela CARTA 2\n");
    scanf("%d", &opcaoCarta);
    
    switch (opcaoCarta) {

        case 1:

            entrada1();

            printf("\nCARTA 1 cadastrada com sucesso!\n");
            printf("Agora cadastre a CARTA 2!\n");
            entrada2();

        break;

        case 2:

            entrada2();

            printf("\nCARTA 2 cadastrada com sucesso!\n");
            printf("Agora cadastre a CARTA 1!\n");
            entrada1();
        
        break;

        default:

            printf("\nCadastre sua carta!\n");
           
    }
}

int escolhaAtributos() {

    printf("Escolha seu atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Densidade populacional");
    printf("4. PIB\n");
    printf("5. PIB per capita\n");
    printf("6. Pontos turísticos\n");
    scanf("%d", &opcaoAtributo);
}

// Verificação do vencedor
int vencedor() {
    
    printf("--------RESULTADO--------\n");

    switch (opcaoAtributo) {
        case 1:

            if (populacao1>populacao2){
                printf("POPULAÇÃO: Carta 1 (%s) vencedora!\n", cidade1);
                } else {
                printf("POPULAÇÃO: Carta 2 (%s) vencedora!\n", cidade2);
            }
        break;

        case 2:
            
            if (area1>area2) {
                printf("ÁREA: Carta 1 (%s) vencedora!\n", cidade1);
            } else {
                printf("ÁREA: Carta 2 (%s) vencedora!\n", cidade2);
            }
        break;

        case 3:

            if (densidade1>densidade2) {
                printf("DENSIDADE POPULACIONAL: Carta 1 (%s) vencedora!\n", cidade1);
            } else {
                printf("DENSIDADE POPULACIONAL: Carta 2 (%s) vencedora!\n", cidade2);
            }
        break;

        case 4:
    
            if (pib1>pib2) {
                printf("PIB: Carta 1 (%s) vencedora!\n", cidade1);
            } else {
                printf("PIB: Carta 2 (%s) vencedora!\n", cidade2);
            }
        break;

        case 5:
            if (ppc1>ppc2) {
                printf("PIB PER CAPITA: Carta 1 (%s) vencedora!\n", cidade1);
            } else {
                printf("PIB PER CAPITA: Carta 2 (%s) vencedora!\n", cidade2);
            }
        break;

        case 6:
            if (pontos1>pontos2) {
                printf("PONTOS TURÍSTICOS: Carta 1 (%s) vencedora!\n", cidade1);
            } else {
                printf("PONTOS TURÍSTICOS: Carta 2 (%s) vencedora!\n", cidade2);
            }
        break;
    }
}
 

// Função principal
int main(){
    menu();
    escolhaAtributos();
    vencedor();

    return 0;
}
