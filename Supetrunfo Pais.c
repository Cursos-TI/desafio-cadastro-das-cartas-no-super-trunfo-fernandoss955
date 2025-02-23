#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // Jogo Super trunfo((PAISES))
    
    printf("BEM VINDOS AO MEU GAME - SUPER TRUNFO.... BOM JOGO \n");
    
    int opcao;
    char pais1[10];              char pais2[10];
    char codigo1[10];           char codigo2[10];
    char estado1[5];            char estado2[5];
    char cidade1[10];           char cidade2[10];
    float area1;                float area2;
    int populacao1;             int populacao2;
    float PIB1;                 float PIB2;
    int pontosturisticos1;      int pontosturisticos2;
    double Hadouken1;          double Hadouken2;
    
    printf("\n");
    printf("menu principal\n");
    printf("1: iniciar jogo\n");
    printf("2: ver regras\n");
    printf("3: sair\n");
    printf(" escolha uma opcao\n");
    scanf ("%d", &opcao);
    

    switch (opcao){
    case 1:
    printf("voce escolheu a opcao 1:\n");
      break;
    case 2:
    printf(" voce escolheu a opcao 2:\n");
    case 3:
      printf("sair do menu...\n");
    break;
    default:
      printf("opcao invalida\n");
    }

    printf("PLAYER 1\n");
    printf("\n");
    printf("Digite o codigo da Primeira carta: \n");
    scanf("%s", &codigo1);
    printf(" Digite o pais\n");
    scanf(" %[^\n]", &pais1);
    printf("Digite o estado: \n");
    scanf("%s", &estado1);
    printf("Digite a cidade: \n");
    scanf(" %[^\n]", cidade1);
    printf("Digite a area [km²]: \n");
    scanf("%f", &area1);
    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);
    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);
    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontosturisticos1);
    printf("\n");// Espaço de uma linha//
    printf("\n");// Espaço de uma linha//
    printf("PLAYER 2\n");
    printf("Digite o Codigo Da Segunda Carta:\n");
    scanf("%s", &codigo2);
    printf("Digite o pais\n");
    scanf(" %[^\n]", &pais2);
    printf("Digite o Estado:\n");
    scanf("%s", &estado2);
    printf("Digite a Cidade:\n");
    scanf(" %[^\n]", cidade2);
    printf("Digite a Area [km²]:\n");
    scanf("%f", &area2);
    printf("Digite a População:\n");
    scanf("%d", &populacao2);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);
    printf("Quatidade de Pontos Turisticos:\n");
    scanf("%d", &pontosturisticos2);
    //>>>>>>>>>>>>><<<<<<<<<<<<<//
    printf("CODIGO DA CARTA:<<<%s>>>\n", codigo1);   
    printf("NOME DO PAIS: %S\n", pais1);
    printf("NOME DO ESTADO: %s\n", estado1);
    printf("NOME DA CIDADE:%s\n", cidade1);            
    printf("AREA: %f\n", area1);                     
    printf("NUMERO DE POPULAÇÃO: %d\n", populacao1);
    printf("PIB: %f\n", PIB1);
    printf("PONTOS TURISTICOS: %d\n", pontosturisticos1);
    //>>>>>>>>>>>>><<<<<<<<<<<<<//
    printf("CODIGO DA CARTA:<<<%s>>>\n", codigo2);
    printf("NOME DO ESTADO: %S\n , pais2");   
    printf("NOME DO ESTADO: %s\n", estado2);
    printf("NOME DA CIDADE:%s\n", cidade2);                
    printf("AREA: %f\n", area2);                     
    printf("NUMERO DE POPULAÇÃO: %d\n", populacao2);
    printf("PIB: %f\n", PIB2);
    printf("PONTOS TURISTICOS: %d\n", pontosturisticos2);
 
      printf("escolha uma opcao\n");
      printf("codigo da carta\n");
      printf("estado\n");
      printf("cidade\n");
      
    
    populacao1 = populacao1 / area1;
    PIB1 = PIB1 / populacao1;
    Hadouken1 = populacao1 + area1 + PIB1 + pontosturisticos1;

    populacao2= populacao2 / area2;
    PIB2 = PIB2 / populacao2;
    Hadouken2 = populacao2 + area2 + PIB2 + pontosturisticos2;
    
    printf("\nComparação entre %s e %s:\n", codigo1, codigo2);
    printf("Densidade Populacional: %s VICTORY\n", (populacao1 < populacao2 ? codigo1 : codigo2));
    printf("População: %s VICTORY\n", (populacao1 > populacao2) ? codigo1 : codigo2);
    printf("Área: %s VICTORY\n", (area1 > area2) ? codigo1 : codigo2);
    printf("PIB: %s VICTORY\n", (PIB1 > PIB2) ? codigo1 : codigo2);
    printf("Pontos turísticos: %s VICTORY\n", (pontosturisticos1 > pontosturisticos2) ? codigo1 : codigo2);
    printf("Hadouken: %s VICTORY\n", (Hadouken1 >  Hadouken2 ? codigo1 : codigo2));

    return 0;
    
    