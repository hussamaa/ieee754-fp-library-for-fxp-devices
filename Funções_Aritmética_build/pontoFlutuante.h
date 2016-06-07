#include <math.h>
#include<stdio.h>
#include<string.h>

   int op,i,k,casaDecimal;
   int tamanho,base,vIEEE[8],expoenteDecimal,resultadoIEEE;
   int e1, e2, j, numeroDireito1[32],numeroEsquerdo1[32], numeroDireito2[32],numeroEsquerdo2[32];
   int tamDireito,num1[24],num2[24],tamEsquerdo,resultado,resultado1[32],ma[64],resultado2[32],carry;
   int numero1[32],numero2[32];
   int q,p,resultadoDecimal,flag_1=0;
   int soma[64],deslocamento,c[64];
   float baseFra,resultadoDec,resultadoFra;


int converte_binario(int numero[]){
int tamanho, resultadoIEEE, base,e1,e2;
    base = 0;
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
    // printf("\nverificacao: ");
      j = 0;
     // printf("r\n");
      for( i = expoenteDecimal + 9; i <= 31; i++){
        //  printf("exp: %d %d",j,i);
          numeroDireito1[j] = numero[i];
          printf(" %d",numeroDireito1[j]);
          j++;
      }

      tamDireito = j;
      //printf("tamanho: %d",tamDireito);
      j = 1;
      printf("\n");
      //printf("\n%d",numeroDireito[j])
      printf("\n");
      for(i = 9 ; i < expoenteDecimal + 9; i++){
          tamEsquerdo = j;
          numeroEsquerdo1[j] = numero[i];
          printf(" %d",numeroEsquerdo1[j]);
          j++;
      }
}

void soma_binarioInteiro(int numeroDireito1[],int numero[],int j){

      carry = 0;
      resultado = 0;
      flag_1 = 1;
      j = tamDireito + expoenteDecimal;
      printf("\n");
      for( i = 31; i >= 9; i-- ){
          resultado = numeroDireito1[j] + numero[i] + carry;
          resultado1[i] = resultado % 2;
          //printf("%d",resultado1[i]);
          carry = resultado / 2;
          j--;
      }
      printf("carry: %d",carry);
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
    //  if(carry == 1)printf("$");
}

float conversao_binarioDecimal(int resultado1[],int tamanho, int e2){
      // printf("aqui :%d\n",expoenteDecimal);
      resultadoDecimal = 0;
      i = 0;
      if(carry ==1 && flag_1 == 1) resultadoDecimal += pow(2,expoenteDecimal+1);

      while( tamanho <= expoenteDecimal && tamanho >= 0 ){
            baseFra = pow(2,i);
            resultadoDecimal += resultado1[tamanho] * baseFra;
            // if(carry ==1 ) resultadoDecimal += pow(2,expoenteDecimal+1);
            // printf("\n%d",resultadoDecimal);
            tamanho--;
            i++;
      }

      i = -1;
      tamanho = 9;
      resultadoFra = 0.0;
      resultadoDec = 0.0;

      while( tamanho <= 31 ){
            baseFra = pow(2,i);
            resultadoFra += resultado1[tamanho] * baseFra;
            // printf("\n%.20f",resultadoFra);
            tamanho++;
            i--;
      }

      resultadoDec = (resultadoDecimal + resultadoFra)*pow(2,e2);
      return resultadoDec;
}

void subtracao_binario(int numeroDireito[],int numero[],int j){


      carry = 0;
      resultado = 0;
      int var = 0;
     // printf("fra: \n%d",j);

      for( i = 31; i >= 9; i-- ){
          resultado = numeroDireito[j] - carry;
          //printf("\n%d %d %d %d %d",carry,resultado,numeroDireito[j],numero[i],i);
          if (resultado < 0){
              carry = 1;
              /*if(carry - numero[i] < 0){
              resultado1[i] = 1;
              }*/
              resultado1[i] = carry - numero[i];
          }
          else {
              var = resultado - numero[i];
              if (var < 0){
              resultado1[i] = 1;
              carry = 1;
          }
            else {
              resultado1[i] = var;
              carry = 0;
            }
          }
        j--;
    }
            /*if (carry == 0)resultado = numeroDireito[j] - numero[i] - carry;
            if(carry == 1) {
            resultado = numeroDireito[j] - carry;
            if(resultado < 0){
            var= 1;
            resultado1[i] = var - numero[i];
            carry = 1;
            }
            else{
                 var = 0;
                 resultado1[i] = var - numero[i];
            carry = 0;

            }
            }
             printf("\n%d",numeroDireito[j]);
              printf("\n%d",numero[i]);
            printf("\n%d",resultado);
            if(resultado < 0){
            resultado1[i] = 1;
            carry = 1;
            }
            else {
                resultado1[i] = resultado;
                carry = 0;
                }
             printf(" %d",resultado1[i]);
            j--;

           }
           printf("\n");*/
 }

void subtracao_inteira(int numeroEsquerdo[]){

      printf("resultado final:%d\n",expoenteDecimal);

      resultado = 0;
      j = expoenteDecimal;
      int var = 0;
      k = 1;

      for( i = expoenteDecimal; i >= 0; i-- ){
          resultado = numeroEsquerdo[j] - carry;
          //printf("\n%d %d %d %d %d",carry,resultado,numeroEsquerdo[j],resultado1[i],i);
          //printf(" re:%d",resultado);
          if(resultado < 0 ){
              carry = 1;
              /*if(carry - numero[i] < 0){
              resultado1[i] = 1;
              }*/
              if (k == 1)resultado1[i] = carry - k;
              else resultado1[i] = carry;
              /*resultado1[i] = 1;
              carry = 1;*/
          }
          else {

              if(k == 1) {
                  var = resultado - k;
                  if(var < 0) {
                    resultado1[i] = 1;
                    carry = 1;
                  }
                  else resultado1[i] = resultado - k;
              }
              else {
                resultado1[i] = resultado;
                carry = 0;
              }
          }
          // printf(" %d",resultado1[expoenteDecimal-j]);
          j--;
          k = 0;
      }
}
