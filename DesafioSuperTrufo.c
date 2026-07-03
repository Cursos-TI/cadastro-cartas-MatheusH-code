#include<stdio.h>

int main(){

     //Aqui se encontra todos os dados da primeira carta 
    char estado = 'A';
    char codigo [4] = "A01";                    //condigo da carta 
    char nome [50] = "Uberlandia";              //nome da cidade
    int populacao = 761835;                   // Polpulação total
    float area = 4115.82;                     // area total em Km²
    int pib = 51;                             //PIB total (51 bilhoes)
    int tur = 15;                            // Principais pontos turisticos
    float Densidade;                         
    float PIBp;
    float Superpoder;
    
    Densidade = populacao / area;   // Divisao para saber densidade
    PIBp =(float)populacao / pib ;   // Divisao para saber PIB per Capita
    Superpoder =(float) populacao + area + pib + PIBp + Densidade/1 + tur; //Soma de todos atributos para um Superpoder
    
    //Aqui se encontra todos os dados da segunda carta 


   char estado1 = 'B';
   char codigo1 [5] = "B02";                    //condigo da carta 
   char nome1 [20] = "Uberaba";              //nome da cidade
   int populacao1 = 356781;                   // Polpulação total
   int area1 = 4524;                     // area total em Km²
   float pib1 = 23.7;                             //PIB total 23,7 bilhoes
   int tur1 = 7;                              // Principais pontos turisticos
   float Densidade1, PIBp1;
   float Superpoder1 ;                         
   Densidade1 = populacao1 / area1;          // Divisao para saber densidade
   PIBp1 =(float)populacao1 / pib1;          // divisão de população por PIB.
   Superpoder1 = (float) populacao1 + area1 + pib + PIBp1 + Densidade1/1 + tur1; //Soma de todos atributos para um Superpoder
    //impressão da primeira carta 
    printf (" ---->Carta Uberlandia<---- \n");  //Nome da carta

    printf("Estado: %c \n", estado);    //Vai mostrar na tela o Estado

    printf("Condigo da carta: %s \n", codigo);   //Vai mostrar na tela Codigo da carta

    printf("Nome da Cidade: %s \n", nome);      //Vai mostrar na tela Nome da Cidade

    printf("Poulacao: %d  \n", populacao);  //Vai mostrar na tela estimativa de População 
    
    printf("Area: %.2f km² \n", area);    //Vai mostrar na tela area da cidade

    printf("PIB: %d Bilhoes \n", pib );  //Vai mostrar na tela PIB de 2025

    printf("Pontos Turisticos: %d \n", tur); //Vai mostrar na tela Principais pontos turisticos

    printf("Densidade Populacional: %.2f \n", Densidade); // Divisão de população por area²
    
    printf("PIB per Capita : %.2f \n", PIBp); // divisão de popilação por PIB.

    printf ("Superpoder : %.2f  \n", Superpoder);


    

    //impressão da segunda carta

    printf (" ---->Carta Uberaba<---- \n");  //Nome da carta
    
    printf("Estado: %c \n", estado1);    //Vai mostrar na tela o Estado

    printf("Condigo da carta: %s \n", codigo1);   //Vai mostrar na tela Codigo da carta

    printf("Nome da Cidade: %s \n", nome1);      //Vai mostrar na tela Nome da Cidade

    printf("Populacao: %d  \n", populacao1);  //Vai mostrar na tela estimativa de População 
    
    printf("Area: %d km² \n", area1);    //Vai mostrar na tela area da cidade

    printf("PIB: %.1f Bilhoes \n", pib1 );  //Vai mostrar na tela PIB de 2025

    printf("Pontos Turisticos: %d \n", tur1); //Vai mostrar na tela Principais pontos turisticos

    printf("Densidade Populacional: %.2f \n", Densidade1); // Divisão de população por area²
    
    printf("PIB per Capita : %.2f \n", PIBp1); // divisão de popilação por PIB.

    printf ("Superpoder : %.2f  \n", Superpoder1); 

       // **Comparação de resultados**
 
    printf ("--->Comparacao de carta<--- \n Se resultado for '1' carta Uberlandia ganha se o resultado for '0' carta Uberaba ganha\n" );
   
    printf("Populacao: %d  \n", populacao > populacao1 );

    printf("Area: %d  \n", area > area1 );

    printf("PIB: %d  \n", (int) pib > pib1 );
    
    printf("Pontos Turisticos: %d  \n", tur > tur1 );

    printf("Densidade Populacional: %d  \n",(int) Densidade > Densidade1 );

    printf("PIB percapita: %d  \n", PIBp <= PIBp1 );

    printf("Superpoder: %d  \n", (int) Superpoder > Superpoder1 );
    
    return 0;
}
