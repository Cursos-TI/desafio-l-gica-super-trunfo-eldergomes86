#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

char uf1[2], uf2[2];
char codigo1[4], codigo2[4];
char cidade1[50], cidade2[50];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontos1, pontos2;
float densidade1, densidade2;
float ppc1, ppc2;

// Primeira parte: entrada de atributos fundamentais
int entrada(){
    
    

    printf("-------- CARTA 1 ----------\n");  
    printf("Insira o estado da primeira carta: ");
    scanf("%s", &uf1);
    printf("Insira o código da primeira carta (UF + número): ");
    scanf("%s", &codigo1);
    printf("Insira o nome da cidade da primeira carta: ");
    scanf("%s", &cidade1);
    printf("Insira o tamanho da população da primeira carta: ");
    scanf("%d", &populacao1);
    printf("Insira o tamanho da área da primeira carta: ");
    scanf("%f", &area1);
    printf("Insira o PIB da primeira carta: ");
    scanf("%f", &pib1);
    printf("Insira o número de pontos turísticos da primeira carta: ");
    scanf("%d", &pontos1);
    printf("-------- CARTA 2 ----------\n"); 
    printf("Insira o estado da segunda carta: ");
    scanf("%s", &uf2);
    printf("Insira o código da segunda carta (UF + número): ");
    scanf("%s", &codigo2);
    printf("Insira o nome da cidade da segunda carta: ");
    scanf("%s", &cidade2);
    printf("Insira o tamanho da população da segunda carta: ");
    scanf("%d", &populacao2);
    printf("Insira o tamanho da área da segunda carta: ");
    scanf("%f", &area2);
    printf("Insira o PIB da segunda carta: ");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos da segunda carta: ");
    scanf("%d", &pontos2);
    
}

// Cálculo dos atributos secundários
void calculo(){

    

    densidade1 = (float)populacao1/area1;
    densidade2 = (float)populacao2/area2;
    ppc1 = pib1/populacao1;
    ppc2 = pib2/populacao2;

    populacao1 = (int)populacao1;
    populacao2 = (int)populacao2;
}

// Verificação do vencedor
int vencedor() {
    
    printf("--------RESULTADO--------\n");

    if (populacao1>populacao2){
        printf("POPULAÇÃO: Carta 1 (%s) vencedora!\n", &cidade1);
    } else {
        printf("POPULAÇÃO: Carta 2 (%s) vencedora!\n", &cidade2);
    }

    if (area1>area2) {
        printf("ÁREA: Carta 1 (%s) vencedora!\n", &cidade1);
    } else {
        printf("ÁREA: Carta 2 (%s) vencedora!\n", &cidade2);
    }

    if (densidade1>densidade2) {
        printf("DENSIDADE POPULACIONAL: Carta 1 (%s) vencedora!\n", &cidade1);
    } else {
        printf("DENSIDADE POPULACIONAL: Carta 2 (%s) vencedora!\n", &cidade2);
    }

    if (pib1>pib2) {
        printf("PIB: Carta 1 (%s) vencedora!\n", &cidade1);
    } else {
        printf("PIB: Carta 2 (%s) vencedora!\n", &cidade2);
    }

    if (ppc1>ppc2) {
        printf("PIB PER CAPITA: Carta 1 (%s) vencedora!\n", &cidade1);
    } else {
        printf("PIB PER CAPITA: Carta 2 (%s) vencedora!\n", &cidade2);
    }
    
    if (pontos1>pontos2) {
        printf("PONTOS TURÍSTICOS: Carta 1 (%s) vencedora!\n", &cidade1);
    } else {
        printf("PONTOS TURÍSTICOS: Carta 2 (%s) vencedora!\n", &cidade2);
    }

}
 

// Função principal
int main(){
    entrada();
    calculo();
    vencedor();

    return 0;
}
