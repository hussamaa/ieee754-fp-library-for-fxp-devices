#include <math.h>
#include<stdio.h>
#include<string.h>

  int op,i,k,casaDecimal;
  int tamanho,base,vIEEE[8],expoenteDecimal,resultadoIEEE;
   int e1, e2, j, numeroDireito1[32],numeroEsquerdo1[32], numeroDireito2[32],numeroEsquerdo2[32];
   int tamDireito,num1[24],num2[24],tamEsquerdo,resultado,resultado1[32],ma[64],resultado2[32],carry;
   int numero1[32],numero2[32];
   int q,p,resultadoDecimal;
   int soma[64],deslocamento,c[64];
   float baseFra,resultadoDec,resultadoFra;
   float cs;


int converte_binario(int numero[]){
int tamanho, resultadoIEEE, base,e1,e2;
   	tamanho = 1;
    resultadoIEEE = 0;

    while( tamanho <= 8 ){

        base = pow(2,8-tamanho);
        resultadoIEEE += numero[tamanho] * base;
        tamanho++;

    }

    e1 = resultadoIEEE - 127;

    return e1;

}

void shift_left(int expoenteDecimal,int numero[]){

     j = 0;

     for( i = expoenteDecimal + 9; i <= 31; i++){

         numeroDireito1[j] = numero[i];
         j++;

          }

          tamDireito = j;
          j = 1;

        for(i = 9 ; i < expoenteDecimal + 9; i++){

                tamEsquerdo = j;
                numeroEsquerdo1[j] = numero[i];
                j++;

           }


}

void soma_binarioInteiro(int numeroDireito1[],int numero[],int j){

        carry = 0;
        resultado = 0;

        j = tamDireito + expoenteDecimal;

        for( i = 31; i >= 9; i-- ){

            resultado = numeroDireito1[j] + numero[i] + carry;
            resultado1[i] = resultado % 2;
            carry = resultado / 2;
            j--;

           }


}


void multiplicacao_binario(int num1[],int num2[],int p,int q){

           memset(c,0,sizeof(c));

           for (i = 1 ; i <= p; i++ ){

                carry = 0;

                for (j = 1 ; j <= q; j++ ){

                    c[i + j - 1] += carry +num1[i] * num2[j];
                    carry = c[i + j - 1] / 2;
                    c[i + j - 1] =  c[i + j - 1] % 2 ;

                   }

               c[i+p] += carry;

           }

}

void soma_fracionario(int numeroEsquerdo1[]){


    resultado = 0;
          j = expoenteDecimal;

          k = 1;
         printf("\nInteiro:\n");

         for( i = expoenteDecimal; i >= 0; i-- ){

            resultado = numeroEsquerdo1[j] + k + carry;
            resultado1[i] = resultado % 2;
            carry = resultado / 2;
            j--;
            k = 0;

         }

}

float conversao_binarioDecimal(int resultado1[],int tamanho, int e2){

        resultadoDecimal = 0;
        cs = 0.0;
        i = 1;

        while(tamanho >= 0 ){

             baseFra = cs;
             resultadoDecimal += resultado1[tamanho] * baseFra;
             cs = pow(2,i);
             tamanho--;
             i++;

           }

        i = 1;
        tamanho = 9;
        resultadoFra = 0.0;
        resultadoDec = 0.0;

        while( tamanho <= 31 ){

              baseFra = 1/(2*i);
              resultadoFra += resultado1[tamanho] * baseFra;
              tamanho++;
              i++;

        }

       resultadoDec = (resultadoDecimal + resultadoFra)*pow(2,e2);

       return resultadoDec;


       }

void subtracao_binario(int numeroDireito[],int numero[],int j){


        carry = 0;
        resultado = 0;


        for( i = 31; i >= 9; i-- ){

            resultado = numeroDireito[j] - numero[i] - carry;

            if(resultado < 0){
            resultado1[i] = 1;
            carry = 1;
            }
            else {
                resultado1[i] = resultado;
                carry = 0;
                }

            j--;

           }
       }

void subtracao_inteira(int numeroEsquerdo[]){



          resultado = 0;
          j = expoenteDecimal;

          k = 1;

         for( i = expoenteDecimal; i >= 0; i-- ){

            resultado = numeroEsquerdo[j] - k - carry;
            if(resultado < 0 ){

                resultado1[i] = 1;
                carry = 1;
            }
            else {
                    resultado1[i] = resultado;
            carry = 0;}
            j--;
            k = 0;

         }


       }
