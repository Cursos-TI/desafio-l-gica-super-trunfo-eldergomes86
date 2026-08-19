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
int opcaoCarta, opcaoAtributo1, opcaoAtributo2;
int atributo;
float somaCarta1, somaCarta2;

// Entrada de atributos - Carta 1
int entrada1(){
    
    

    printf("\n-------- CARTA 1 ----------\n");  
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
    
    printf("\n-------- CARTA 2 ----------\n"); 
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
        
}

void calculo2(){

    densidade2 = (float)populacao2/area2;
    ppc2 = pib2/populacao2;
    
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

int escolhaAtributo() {

    printf("\nEscolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Densidade populacional"\n);
    printf("4. PIB\n");
    printf("5. PIB per capita\n");
    printf("6. Pontos turísticos\n");
    scanf("%d", &opcaoAtributo1);
    printf("\nEscolha o segundo atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Densidade populacional\n");
    printf("4. PIB\n");
    printf("5. PIB per capita\n");
    printf("6. Pontos turísticos\n");
    scanf("%d", &opcaoAtributo2);

}

int verificarAtributo(){

    if (opcaoAtributo1 ==  opcaoAtributo2) {
        printf("\nEste atributo já foi escolhido. Modifique o atributo 2.\n");
    } else {
        printf("\nAtributos selecionados corretamente!\n");
    }

}

void calcularSoma() {
    somaCarta1 = somaCarta2 = 0;
    switch (opcaoAtributo1) {
        case 1: 
            somaCarta1 += populacao1; 
            somaCarta2 += populacao2; 
        break;
        case 2: 
            somaCarta1 += area1;
            somaCarta2 += area2;      
        break;
        case 3: 
            somaCarta1 += densidade1; 
            somaCarta2 += densidade2; 
        break;
        case 4: 
            somaCarta1 += pib1;       
            somaCarta2 += pib2;       
        break;
        case 5: 
            somaCarta1 += ppc1;       
            somaCarta2 += ppc2;       
        break;
        case 6: 
            somaCarta1 += pontos1;    
            somaCarta2 += pontos2;    
        break;
    }
    switch (opcaoAtributo2) {
        case 1: 
            somaCarta1 += populacao1; 
            somaCarta2 += populacao2; 
        break;
        case 2: 
            somaCarta1 += area1;      
            somaCarta2 += area2;      
        break;
        case 3: 
            somaCarta1 += densidade1; 
            somaCarta2 += densidade2; 
        break;
        case 4: 
            somaCarta1 += pib1;       
            somaCarta2 += pib2;       
        break;
        case 5: 
            somaCarta1 += ppc1;       
            somaCarta2 += ppc2;       
        break;
        case 6: 
            somaCarta1 += pontos1;    
            somaCarta2 += pontos2;    
        break;
    }
}

// Verificação do vencedor
int resultadoAtributo1() {
    
    printf("ATRIBUTO 1:\n");

    switch (opcaoAtributo1) {
        case 1:

            if (populacao1>populacao2){
                printf("POPULAÇÃO: Carta 1 (%s) vencedora!\n", cidade1);
                } else if (populacao1 == populacao2){
                    printf("POPULAÇÃO: empate!\n");
                } else{
                printf("POPULAÇÃO: Carta 2 (%s) vencedora!\n", cidade2);
            }
        
        break;

        case 2:
            
            if (area1>area2){
                printf("ÁREA: Carta 1 (%s) vencedora!\n", cidade1);
                } else if (area1 == area2){
                    printf("ÁREA: empate!\n");
                } else{
                printf("ÁREA: Carta 2 (%s) vencedora!\n", cidade2);
            }
        break;

        case 3:

            if (densidade1<densidade2){
                printf("DENSIDADE: Carta 1 (%s) vencedora!\n", cidade1);
                } else if (densidade1 == densidade2){
                    printf("DENSIDADE: empate!\n");
                } else{
                printf("DENSIDADE: Carta 2 (%s) vencedora!\n", cidade2);
            }
        break;

        case 4:
    
            if (pib1>pib2){
                printf("PIB: Carta 1 (%s) vencedora!\n", cidade1);
                } else if (pib1 == pib2){
                    printf("PIB: empate!\n");
                } else{
                printf("PIB: Carta 2 (%s) vencedora!\n", cidade2);
            }
        break;

        case 5:
            
            if (ppc1>ppc2){
                printf("PIB PER CAPITA: Carta 1 (%s) vencedora!\n", cidade1);
                } else if (ppc1 == ppc2){
                    printf("PIB PER CAPITA: empate!\n");
                } else{
                printf("PIB PER CAPITA: Carta 2 (%s) vencedora!\n", cidade2);
            }
        break;

        case 6:
            if (pontos1>pontos2){
                printf("PONTOS TURÍSTICOS: Carta 1 (%s) vencedora!\n", cidade1);
                } else if (pontos1 == pontos2){
                    printf("PONTOS TURÍSTICOS: empate!\n");
                } else{
                printf("PONTOS TURÍSTICOS: Carta 2 (%s) vencedora!\n", cidade2);
            }
        break;
    }
}

int resultadoAtributo2(){

    printf("ATRIBUTO 2:\n");

    switch (opcaoAtributo2) {
        case 1:

            if (populacao1>populacao2){
                printf("POPULAÇÃO: Carta 1 (%s) vencedora!\n", cidade1);
                } else if (populacao1 == populacao2){
                    printf("POPULAÇÃO: empate!\n");
                } else{
                printf("POPULAÇÃO: Carta 2 (%s) vencedora!\n", cidade2);
            }
        
        break;

        case 2:
            
            if (area1>area2){
                printf("ÁREA: Carta 1 (%s) vencedora!\n", cidade1);
                } else if (area1 == area2){
                    printf("ÁREA: empate!\n");
                } else{
                printf("ÁREA: Carta 2 (%s) vencedora!\n", cidade2);
            }
        break;

        case 3:

            if (densidade1<densidade2){
                printf("DENSIDADE: Carta 1 (%s) vencedora!\n", cidade1);
                } else if (densidade1 == densidade2){
                    printf("DENSIDADE: empate!\n");
                } else{
                printf("DENSIDADE: Carta 2 (%s) vencedora!\n", cidade2);
            }
        break;

        case 4:
    
            if (pib1>pib2){
                printf("PIB: Carta 1 (%s) vencedora!\n", cidade1);
                } else if (pib1 == pib2){
                    printf("PIB: empate!\n");
                } else{
                printf("PIB: Carta 2 (%s) vencedora!\n", cidade2);
            }
        break;

        case 5:
            
            if (ppc1>ppc2){
                printf("PIB PER CAPITA: Carta 1 (%s) vencedora!\n", cidade1);
                } else if (ppc1 == ppc2){
                    printf("PIB PER CAPITA: empate!\n");
                } else{
                printf("PIB PER CAPITA: Carta 2 (%s) vencedora!\n", cidade2);
            }
        break;

        case 6:
            if (pontos1>pontos2){
                printf("PONTOS TURÍSTICOS: Carta 1 (%s) vencedora!\n", cidade1);
                } else if (pontos1 == pontos2){
                    printf("PONTOS TURÍSTICOS: empate!\n");
                } else{
                printf("PONTOS TURÍSTICOS: Carta 2 (%s) vencedora!\n", cidade2);
            }
        break;
    }
  
}

int somaAtributos(){
    printf("\nSOMA DOS ATRIBUTOS:\n");

        if (somaCarta1>somaCarta2){
            printf("SOMA: Carta 1 (%s) vencedora!\n", cidade1);
        } else{
            printf("SOMA: Carta 2 (%s) vencedora!\n", cidade2);
        }
}

// Função principal
int main(){
    menu();
    escolhaAtributo();
    verificarAtributo();
    calcularSoma();
    printf("--------RESULTADO--------\n");
    resultadoAtributo1();
    resultadoAtributo2();
    somaAtributos();

    return 0;
}
