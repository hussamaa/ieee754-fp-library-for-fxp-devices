#include<stdio.h>
#include <assert.h>
#include "pontoFlutuante.h"


int main(){

   int sinal1, sinal2,e1,e2;
     int numero1[32] = {

		0, 1, 0, 0, 0, 0, 1, 0,
                0, 0, 1, 1, 0, 1, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0


	};

	int numero2[32] = {

                0, 1, 0, 0, 0, 0, 0, 1,
                0, 1, 0, 0, 1, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0

	};

   //expoente do Primeiro numero

    e1 =  converte_binario(numero1);

     //expoente do Segundo numero

    e2 = converte_binario(numero2);

    casaDecimal = e1 + e2 + 1;

    //Deslocamento para Esquerda

    if( e1 >= e2 ){

	    sinal1 = numero1[0];
	    sinal2 = numero2[0];

	    expoenteDecimal = e1 - e2;
	    shift_left(expoenteDecimal,numero1);
	}


       assert(numeroEsquerdo1[1] == 0);
       assert(numeroEsquerdo1[2] == 1);

       assert(numeroDireito1[0] == 1);
       assert(numeroDireito1[1] == 0);
       assert(numeroDireito1[2] == 1);
       assert(numeroDireito1[3] == 0);
       assert(numeroDireito1[4] == 0);
       assert(numeroDireito1[5] == 0);
       assert(numeroDireito1[6] == 0);
       assert(numeroDireito1[7] == 0);
       assert(numeroDireito1[8] == 0);
       assert(numeroDireito1[9] == 0);
       assert(numeroDireito1[10] == 0);
       assert(numeroDireito1[11] == 0);
       assert(numeroDireito1[12] == 0);
       assert(numeroDireito1[13] == 0);
       assert(numeroDireito1[14] == 0);
       assert(numeroDireito1[15] == 0);
       assert(numeroDireito1[16] == 0);
       assert(numeroDireito1[17] == 0);
       assert(numeroDireito1[18] == 0);
       assert(numeroDireito1[19] == 0);
      


}
