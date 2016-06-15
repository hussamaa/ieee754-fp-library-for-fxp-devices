#include<stdio.h>
#include "pontoFlutuante.h"
#include "convert.h"


int main(){
  int sinal1, sinal2,i,j;
   float number_1,number_2;

   printf("Informe o primeiro numero binario: \n");
   scanf("%f",&number_1);

   convert(number_1);
 for ( i = 0; i < 31; i++) printf(" %d",array_IEEE[i]);
    i = 0;
    for( j = 0; j <= 31; j++){
        numero1[i] = array_IEEE[j];
        printf(" %d",numero1[i]);
        i++;
    }
   printf("\n");
   printf("\n%d",exp_int);
   printf("\n");
   printf("Informe o segundo numero binario: \n");
   scanf("%f",&number_2);
   convert(number_2);

    i = 0;
    for( j = 0; j <= 31; j++){
        numero2[i] = array_IEEE[j];
        i++;
    }
 i = 0;
   //expoente do Primeiro numero

    e1 =  converte_binario(numero1);

     //expoente do Segundo numero

    e2 = converte_binario(numero2);


    casaDecimal = e1 + e2 + 1;
    printf("\n%d %d %f %f",e1,e2,number_1,number_2);

    //Deslocamento para Esquerda

if( e1 >= e2 ){

    sinal1 = numero1[0];
    sinal2 = numero2[0];

    expoenteDecimal = e1 - e2;
    printf("\nexp:%d\n",expoenteDecimal);
    shift_left(expoenteDecimal,numero1);

    //Deslocamento para Direita - Normalizacao


    tamDireito -= 1;

    for(i = tamDireito; i <= 31;i ++ ) numeroDireito1[i] = 0;
    printf("\n");
    for(i = tamDireito; i <= 31;i ++ ) printf(" %d",numeroDireito1[i]);


    //Soma da parte inteira em binario

    j = tamDireito + expoenteDecimal;
    if(sinal1 != sinal2)subtracao_binario( numeroDireito1, numero2, j );
    else
    soma_binarioInteiro( numeroDireito1, numero2, j);

    //Soma da parte fracionaria em binario

    numeroEsquerdo1[0] = 1;

    j = expoenteDecimal + 1;

    for ( i = 0 ;i <= tamDireito + expoenteDecimal; i++ ){

         numeroEsquerdo1[j] = numeroDireito1[i];
         j++;

         }
    //tamanho do vetor com os respectivo bits

    p = tamDireito + expoenteDecimal+1;

    //Armazenar vetor total

     j = 1;
     numeroEsquerdo2[0] = 1;

     for (i = 9;i <= 31; i++ ) {

          numeroEsquerdo2[j] = numero2[i];
          j++;

     }

     //tamanho do vetor com os respectivo bits

     q = j - 1;

     //Somando os numeros em binario

    if (sinal1 != sinal2) subtracao_inteira(numeroEsquerdo1);
    else soma_fracionario(numeroEsquerdo1);

     //Conversao de binario para Decimal

   tamanho = expoenteDecimal;
     printf("\n%d\n",tamanho);
   resultadoDec =  conversao_binarioDecimal(resultado1,tamanho,e2);

   printf("\n\nResultado da Adicao em Decimal: ");
   printf("%f",resultadoDec);
    // printf("\n%f\n",resultadoDecimal);
   for(i = 0;i <= 31 ;i++) printf("%d ", resultado1[i]);
    }

    else{

        sinal1 = numero1[0];
        sinal2 = numero2[0];
        expoenteDecimal = e2 - e1;
        printf("\nexpoenteDEcimal: %d",expoenteDecimal);

        shift_left(expoenteDecimal,numero2);

        //Deslocamento para Direita - Normalizacao


        tamDireito -= 1;

        for(i = tamDireito; i <= 31;i ++ ) numeroDireito1[i] = 0;


        //Soma da parte inteira em binario
        j = tamDireito + expoenteDecimal;
        if (sinal1 != sinal2)subtracao_binario(numeroDireito1,numero1,j);
        else soma_binarioInteiro(numeroDireito1,numero1,j);

        //Soma da parte fracionaria em binario

        numeroEsquerdo1[0] = 1;

        j = expoenteDecimal + 1;

        for ( i = 0 ;i <= tamDireito + expoenteDecimal; i++ ){

             numeroEsquerdo1[j] = numeroDireito1[i];
             j++;

             }

        //tamanho do vetor com os respectivo bits

        p = tamDireito + expoenteDecimal+1;

        //Armazenar vetor total

         j = 1;
         numeroEsquerdo2[0] = 1;

         for (i = 9;i <= 31; i++ ) {

              numeroEsquerdo2[j] = numero1[i];
              j++;

            }

         //tamanho do vetor com os respectivo bits

         q = j - 1;

         //Somando os numeros em binario
           if (sinal1 != sinal2) subtracao_inteira(numeroEsquerdo1);
           else soma_fracionario(numeroEsquerdo1);

         //Conversao de binario para Decimal

        tamanho = expoenteDecimal;
       printf("\naqui: %d",expoenteDecimal);
       resultadoDec = conversao_binarioDecimal(resultado1,tamanho,e1);
       printf("\n\nResultado da Adicao em Decimal: ");
       printf("%.20f",resultadoDec);


       printf("\n");
       for(i = 0;i <= 31 ;i++) printf(" %d ", resultado1[i]);

 }
    return 0;

}



