#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* nomeAtributo(int a) {
    switch (a) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PiB";
        case 4: return "Pontos Turisticos";
        case 5: return "Densidade";
        case 6: return "PiB per capita";
        case 7: return "Poder";
        default: return "Inválido";
    }
}

//Perguntar, armazenar variaveis das cartas e calcular renda per capta e densidade populacional 
int main(){
//Carta 001
char Estado001[3];
char Codigo001[4];
char Nome001[50];
unsigned long int Populacao001;
float area001;
float PIB001;
int PT001;
float densidade001;
float PiBper001;
float poder001;

//Carta 002
char Estado002[3];
char Codigo002[4];
char Nome002[50];
unsigned long int Populacao002;
float area002;
float PIB002;
int PT002;
float densidade002;
float PiBper002;
float poder002;

//Comparação de uma unica carta
int comparacao01;
int comparacao02;


//Cadastro da Carta 001

printf("Olá, seja bem vindo ao jogo de Super Trunfo!\nVamos começar cadastrando sua primeira cidade?\n");

//Estado 001
printf("Qual o estado da sua carta?\n");
scanf("%s", Estado001);

//Codigo da Carta 001
printf("Código da sua carta:\n");
scanf("%3s", Codigo001);

//Nome da Cidade 001
printf("Nome da cidade:\n");
scanf("%s", Nome001);

//População 001
printf("Quantos habitantes?\n");
scanf("%lu", &Populacao001);

//área 001
printf("Qual a área total?\n");
scanf("%f", &area001);

//PiB 001
printf("Qual o PiB?\n");
scanf("%f", &PIB001);

//Pontos Turisticos 001
printf("Quantos pontos turisticos exitem?\n");
scanf("%d", &PT001);

//Calculo da Densidade Populacional da carta 1
if (area001 != 0)
{
    densidade001 = (float)Populacao001 / area001;
} else
{
    densidade001 = 0.0f;
}


//Calculo PiB per Capita da carta 1



if (Populacao001 != 0)
{
    PiBper001 = (PIB001 * 1000000000.0f) / (float)Populacao001; 
} else
{
    PiBper001 = 0.0f;
}




//Soma do super poder da carta
if (densidade001 != 0)
{
    poder001 = Populacao001 + area001 + PIB001 + PT001 + (1.0 / densidade001) + PiBper001;
//(1.0 / densidade001) para que quanto maior a densidade menor sera o resultado, ou seja, quanto maior a densidade menos ela irá ter influencia
} else
{
   poder001 = Populacao001 + area001 + PIB001 + PT001 + PiBper001; 
   printf("Atenção\nSua densidade e igual a 0, seu poder pode sofrer alteração!\n");
}



//Cadastro da Carta 002

printf("Parabéns! você concluiu o cadastro da sua primeira carta\nPronto para ir para a próxima?\n");

//Estado 002
printf("Qual o estado da sua segunda carta?\n");
scanf("%3s", Estado002);

//Codigo da Carta 002
printf("Código da sua carta:\n");
scanf("%s", Codigo002);

//Nome da Cidade 002
printf("Nome da cidade:\n");
scanf("%s", Nome002);

//População 002
printf("Quantos habitantes?\n");
scanf("%lu", &Populacao002);

//área 002
printf("Qual a área total?\n");
scanf("%f", &area002);

//PiB 002
printf("Qual o PiB?\n");
scanf("%f", &PIB002);

//Pontos Turisticos 002
printf("Quantos pontos turisticos exitem?\n");
scanf("%d", &PT002);

//Calculo da Densidade Populacional da carta 2
if (area002 != 0)
{
    densidade002 = (float) Populacao002 / area002;
} else
{
    densidade002 = 0.0f;
}




//Calculo PiB per Capita da carta 2
if (Populacao002 != 0)
{
    PiBper002 = (PIB002 * 1000000000.0f) / Populacao002; 
} else
{
    PiBper002 = 0.0f;
}

//Soma do super poder da carta
if (densidade002 != 0)
{
    poder002 = Populacao002 + area002 + PIB002 + PT002 + (1.0 / densidade002) + PiBper002;
//(1.0 / densidade001) para que quanto maior a densidade menor sera o resultado, ou seja, quanto maior a densidade menos ela irá ter influencia
} else
{
   poder002 = Populacao002 + area002 + PIB002 + PT002 + PiBper002; 
   printf("Atenção\nSua densidade e igual a 0, seu poder pode sofrer alteração!");
}


//Descrição da carta 001
printf("Carta 001:\n");
printf("Estado: %s\n", Estado001);
printf("Código: %s\n", Codigo001);
printf("Nome da Cidade: %s\n", Nome001);
printf("População: %lu\n", Populacao001);
printf("Área: %.2f km²\n", area001);
printf("PiB: %.2f reais\n", PIB001);
printf("Número de pontos turísticos: %d\n", PT001);
printf("Densidade Populacional: %.2f hab/km²\n", densidade001);
printf("PiB per Capita: %.2f bilções de reais\n", PiBper001);
printf("O Poder da sua carta e: %.2f\n", poder001);

//Descrição da carta 002
printf("Carta 002:\n");
printf("Estado: %s\n", Estado002);
printf("Código: %s\n", Codigo002);
printf("Nome da Cidade: %s\n", Nome002);
printf("População: %lu\n", Populacao002);
printf("Área: %.2f km²\n", area002);
printf("PiB: %.2f reais\n", PIB002);
printf("Número de pontos turísticos: %d\n", PT002);
printf("Densidade Populacional: %.2f hab/km²\n", densidade002);
printf("PiB per Capita: %.2f bilhões de reais\n", PiBper002);
printf("O Poder da sua carta e: %.2f\n", poder002);

//Comparação das cartas:
printf("Escolha um atributo para comparar:\n 1: População\n 2: Área\n 3: PiB\n 4: Pontos Turisticos\n 5: Densidade\n 6: Pib per capita\n 7: Poder\n 8: Sair\n");
scanf("%d", &comparacao01);
    if (comparacao01 == 8)
    {
        printf("Você escolheu sair...\n");
        return 0;
    }
    
do
{
    printf("Escolha outro atributo para comparar:\n 1: População\n 2: Área\n 3: PiB\n 4: Pontos Turisticos\n 5: Densidade\n 6: Pib per capita\n 7: Poder\n 8: Sair\n");
    scanf("%d", &comparacao02);
    if (comparacao02 == 8)
    {
        printf("Você escolheu sair...\n");
        return 0;
    }
    
        if (comparacao01 == comparacao02)
        {
            printf("Você já escolheu esse atributo, escolha outro!\n");
        }
        
    
} while (comparacao01 == comparacao02);

    // Variáveis para armazenar os valores escolhidos e somas
    float atributo0101 = 0, atributo0102 = 0;
    float atributo0201 = 0, atributo0202 = 0;

    // Função para pegar valor do atributo 1
    switch (comparacao01) {
        case 1: atributo0101 = Populacao001; atributo0102 = Populacao002; break;
        case 2: atributo0101 = area001; atributo0102 = area002; break;
        case 3: atributo0101 = PIB001; atributo0102 = PIB002; break;
        case 4: atributo0101 = PT001; atributo0102 = PT002; break;
        case 5: atributo0101 = densidade001; atributo0102 = densidade002; break;
        case 6: atributo0101 = PiBper001; atributo0102 = PiBper002; break;
        case 7: atributo0101 = poder001; atributo0102 = poder002; break;
        default: printf("Primeiro Atributo inválido!\n"); return 1;
    }

    // Função para pegar valor do atributo 2
    switch (comparacao02) {
        case 1: atributo0201 = Populacao001; atributo0202 = Populacao002; break;
        case 2: atributo0201 = area001; atributo0202 = area002; break;
        case 3: atributo0201 = PIB001; atributo0202 = PIB002; break;
        case 4: atributo0201 = PT001; atributo0202 = PT002; break;
        case 5: atributo0201 = densidade001; atributo0202 = densidade002; break;
        case 6: atributo0201 = PiBper001; atributo0202 = PiBper002; break;
        case 7: atributo0201 = poder001; atributo0202 = poder002; break;
        default: printf("Atributo inválido no segundo!\n"); return 1;
    }

    // Lógica para saber quem venceu em cada atributo
    int vencedor_attr1 = 0; // 0=empate, 1=cart01, 2=cart02
    int vencedor_attr2 = 0;

    // A densidade é atributo invertido (menor vence)
    if (comparacao01 == 5) {
        if (atributo0101 < atributo0201) vencedor_attr1 = 1;
        else if (atributo0201 < atributo0101) vencedor_attr1 = 2;
        else vencedor_attr1 = 0;
    } else {
        if (atributo0101 > atributo0201) vencedor_attr1 = 1;
        else if (atributo0201 > atributo0101) vencedor_attr1 = 2;
        else vencedor_attr1 = 0;
    }

    if (comparacao02 == 5) {
        if (atributo0102 < atributo0202) vencedor_attr2 = 1;
        else if (atributo0202 < atributo0102) vencedor_attr2 = 2;
        else vencedor_attr2 = 0;
    } else {
        if (atributo0102 > atributo0202) vencedor_attr2 = 1;
        else if (atributo0202 > atributo0102) vencedor_attr2 = 2;
        else vencedor_attr2 = 0;
    }

    // Soma dos atributos
    float soma1 = atributo0101 + atributo0201;
    float soma2 = atributo0102 + atributo0202;

    // Relatório final
    printf("\n===== RESULTADO DA RODADA =====\n");
    printf("Carta 1: %s (%s)\n", Nome001, Estado001);
    printf("Carta 2: %s (%s)\n\n", Nome002, Estado002);

    printf("Atributo 1: %s\n", nomeAtributo(comparacao01));
    printf("Valores: %.2f vs %.2f\n", atributo0101, atributo0201);
    if (vencedor_attr1 == 1) printf("Vencedor: Carta 1\n");
    else if (vencedor_attr1 == 2) printf("Vencedor: Carta 2\n");
    else printf("Empate neste atributo\n");

    printf("\nAtributo 2: %s\n", nomeAtributo(comparacao02));
    printf("Valores: %.2f vs %.2f\n", atributo0102, atributo0202);
    if (vencedor_attr2 == 1) printf("Vencedor: Carta 1\n");
    else if (vencedor_attr2 == 2) printf("Vencedor: Carta 2\n");
    else printf("Empate neste atributo\n");

    printf("\nSoma dos atributos:\n");
    printf("Carta 1: %.2f\n", soma1);
    printf("Carta 2: %.2f\n", soma2);
    
    //Lógica para determinar o vencedor da RODADA
    if (vencedor_attr1 == 1 && vencedor_attr2 == 1) 
    {    printf("\\n*** CARTA 1 VENCEU A RODADA! ***\\n");
    } else if (vencedor_attr1 == 2 && vencedor_attr2 == 2) {
        printf("\\n*** CARTA 2 VENCEU A RODADA! ***\\n");
    } else {    
        printf("\\n*** EMPATE NA RODADA! ***\\n");}

return 0;
}
