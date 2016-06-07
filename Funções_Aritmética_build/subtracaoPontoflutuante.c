#include<stdio.h>
#include "pontoFlutuante.h"
#include "convert.h"


int main(){

    int sinal1, sinal2,i,j,zero;
    float number_1,number_2;

    printf("Informe o primeiro numero binario: \n");
    scanf("%f",&number_1);

    convert(number_1);
    i = 0;
    for( j = 0; j <= 31; j++){
        numero1[i] = array_IEEE[j];
         printf(" %d",numero1[i]);
        i++;
    }

    printf("\n");
    printf("Informe o segundo numero binario: \n");
    scanf("%f",&number_2);
    convert(number_2);

    i = 0;
    for( j = 0; j <= 31; j++){
      numero2[i] = array_IEEE[j];
      printf(" %d",numero2[i]);
      i++;
    }

    i = 0;

   //expoente do Primeiro numero

    e1 =  converte_binario(numero1);

     //expoente do Segundo numero

    e2 = converte_binario(numero2);

    casaDecimal = e1 + e2 + 1;
    printf(" %d %d",e1,e2);

    //Deslocamento para Esquerda

    if( e1 >= e2 ){

        expoenteDecimal = e1 - e2;
        printf("\n");

        shift_left(expoenteDecimal,numero1);

        //Deslocamento para Direita - Normalizacao

        tamDireito -= 1;
        zero = 0;
        if (expoenteDecimal == 0) zero = 1;
       // printf("tamdireto: %d\n",tamDireito);

        for(i = tamDireito + expoenteDecimal + zero; i <= 31;i ++ ) numeroDireito1[i] = 0;

        //Subtracao da parte inteira em binario

        j = tamDireito + expoenteDecimal;

        //j = tamDireito;
        subtracao_binario( numeroDireito1, numero2, j );

        //Subtracao da parte fracionaria em binario

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
         numeroEsquerdo1[0] = 1;
         numeroEsquerdo2[0] = 1;

         for (i = 9;i <= 31; i++ ) {

              numeroEsquerdo2[j] = numero2[i];
              j++;

          }

         //tamanho do vetor com os respectivo bits

         q = j - 1;

         //Somando os numeros em binario

         subtracao_inteira(numeroEsquerdo1);

         //Conversao de binario para Decimal

        tamanho = expoenteDecimal;
        printf("\n");
        for (i = 0;i <= tamanho; i++ ) printf(" %d",resultado1[i]);
        printf("\n");
        for (i = 9;i <= 31; i++ ) printf(" %d",resultado1[i]);
        resultadoDec =  conversao_binarioDecimal(resultado1,tamanho,e2);
        printf("\n\nResultado da Subtracao em Decimal: ");
        printf("%.20f",resultadoDec);
    }

  /*  else{

        expoenteDecimal = e2 - e1;
        shift_left(expoenteDecimal,numero2);
        //Deslocamento para Direita - Normalizacao


        tamDireito -= 1;

        for(i = tamDireito; i <= 31;i ++ ) numeroDireito1[i] = 0;


        //Soma da parte inteira em binario

        j = tamDireito + expoenteDecimal;
        subtracao_binario(numeroDireito1,numero1,j);

        //Soma da parte fracionaria em binario

        numeroEsquerdo1[0] = 1;

        j = expoenteDecimal + 1;

        for ( i = 0 ;i <= tamDireito + expoenteDecimal; i++ ){

             numeroEsquerdo1[j] = numeroDireito1[i];
             j++;

             }

        //tamanho do vetor com os respectivo bits

        //p = tamDireito + expoenteDecimal+1;

        //Armazenar vetor total

         j = 1;
         numeroEsquerdo1[0] = 1;
         numeroEsquerdo2[0] = 1;

         for (i = 9;i <= 31; i++ ) {

              numeroEsquerdo1[j] = numero2[i];
              j++;

            }

         //tamanho do vetor com os respectivo bits

         //q = j - 1;

         //Somando os numeros em binario

         subtracao_inteira(numeroEsquerdo1);

         //Conversao de binario para Decimal

       tamanho = expoenteDecimal;
       resultadoDec = conversao_binarioDecimal(resultado1,tamanho,e1);
       printf("\n\nResultado da Subtracao em Decimal: ");
       printf("%f",resultadoDec);
       printf("\n");

    }
*/
    return 0;

}
