#include <stdio.h>


int main(){
    // Jogo Super Trunfo (PAISES)

    printf("BEM VINDOS AO MEU GAME - SUPER TRUNFO.... BOM JOGO \n");

    int opcao;                                  
    char pais1[10], pais2[10];                  
    char codigo1[10], codigo2[10];              
    char estado1[5], estado2[5];           
    char cidade1[10], cidade2[10];              
    float area1, area2;                         
    int populacao1, populacao2;             
    float PIB1, PIB2;                          
    int pontosturisticos1, pontosturisticos2;   
    double Hadouken1, Hadouken2;               

    printf("\n");
    printf("Menu principal\n");
    printf("1: iniciar jogo\n");
    printf("2: ver regras\n");
    printf("3: sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

   
    printf("\nPLAYER 1\n");
    printf("Digite o código da Primeira carta: ");
    scanf("%s", codigo1);
    printf("Digite o país: ");
    scanf(" %[^\n]", pais1);
    printf("Digite o estado: ");
    scanf("%s", estado1);
    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a área [km²]: ");
    scanf("%f", &area1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\nPLAYER 2\n");
    printf("Digite o código da Segunda carta: ");
    scanf("%s", codigo2);
    printf("Digite o país: ");
    scanf(" %[^\n]", pais2);
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a área [km²]: ");
    scanf("%f", &area2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    populacao1 = populacao1 / area1;
    PIB1 = PIB1 / populacao1;
    Hadouken1 = populacao1 + area1 + PIB1 + pontosturisticos1;

    populacao2 = populacao2 / area2;
    PIB2 = PIB2 / populacao2;
    Hadouken2 = populacao2 + area2 + PIB2 + pontosturisticos2;

    printf("\n--- JOGADOR 1 ---\n");
    printf("CÓDIGO DA CARTA: %s\n", codigo1);   
    printf("PAÍS: %s\n", pais1);
    printf("ESTADO: %s\n", estado1);
    printf("CIDADE: %s\n", cidade1);            
    printf("ÁREA: %.2f km²\n", area1);                     
    printf("POPULAÇÃO: %d\n", populacao1);
    printf("PIB: %.2f\n", PIB1);
    printf("PONTOS TURÍSTICOS: %d\n", pontosturisticos1);

    printf("\n--- JOGADOR 2 ---\n");
    printf("CÓDIGO DA CARTA: %s\n", codigo2);   
    printf("PAÍS: %s\n", pais2);
    printf("ESTADO: %s\n", estado2);
    printf("CIDADE: %s\n", cidade2);                
    printf("ÁREA: %.2f km²\n", area2);                     
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("PIB: %.2f\n", PIB2);
    printf("PONTOS TURÍSTICOS: %d\n", pontosturisticos2);

    

    return 0;
}