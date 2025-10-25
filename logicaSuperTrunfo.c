#include <stdio.h>

int main(){
//Criando as variáveis das cartas

    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50]; 
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

//Perguntando e coletando os dados da Carta 1
    printf("Digite o Estado[A-H]: \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite a Cidade: \n");
    scanf(" %49[^\n]", &cidade1);

    printf("Digite a População: \n");      
    scanf("%d", &populacao1);

    printf("Digite a Área: \n");
    scanf("%f", &area1);

    printf("Digite o Pib: \n");
    scanf("%f", &pib1);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos1);

    //Exibindo os dados da Carta 1
    printf("~ Carta 1 ~ \n");
    printf("Estado:%c \n", estado1);
    printf("Código:%s \n", codigo1);
    printf("Cidade:%s \n", cidade1);
    printf("População:%d \n", populacao1);
    printf("Área:%.2f \n", area1);
    printf("Pib:%.2f \n", pib1);
    printf("Pontos Turísticos:%d \n", pontosturisticos1);

    //Carta 2
    printf("Carta 2 \n");

    //Perguntando e coletando os dados da Carta 2
    printf("Digite o Estado[A-H]: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta: \n");
    scanf("%s", &codigo2);

    printf("Digite a Cidade: \n");
    scanf(" %49[^\n]", &cidade2);

    printf("Digite a População: \n");      
    scanf("%d", &populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &area2);

    printf("Digite o Pib: \n");
    scanf("%f", &pib2);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos2);

    //Exibindo os dados da Carta 2
    printf("~ Carta 2 ~ \n");
    printf("Estado:%c \n", estado2);
    printf("Código:%s \n", codigo2);
    printf("Cidade:%s \n", cidade2);
    printf("População:%d \n", populacao2);
    printf("Área:%.2f \n", area2);
    printf("Pib:%.2f \n", pib2);
    printf("Pontos Turísticos:%d \n", pontosturisticos2);

    //Comparando Populações
    if (populacao1 > populacao2){
        printf("~Carta 1 Venceu!~\n");
        printf("A cidade vencedora é: %s \n", cidade1);
        printf("Atributo de Comparação: População\n");
    } else {
        printf("~Carta 2 Venceu~\n");
        printf("A cidade vencedora é: %s \n", cidade2);
        printf("Atributo de Comparação: População\n");
    }

return 0;
}