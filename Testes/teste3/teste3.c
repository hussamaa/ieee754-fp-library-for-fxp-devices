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

                1, 1, 0, 0, 0, 0, 0, 1,
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


      //Deslocamento para Direita - Normalizacao


    tamDireito -= 1;

    for(i = tamDireito; i <= 31;i ++ ) numeroDireito1[i] = 0;
  
      //Soma da parte inteira em binario

    j = tamDireito + expoenteDecimal;
    if(sinal1 != sinal2)subtracao_binario( numeroDireito1, numero2, j );
    else
    soma_binarioInteiro( numeroDireito1, numero2, j);

        assert (resultado1[31] == 0);
        assert (resultado1[30] == 0);
	assert (resultado1[29] == 0);
	assert (resultado1[28] == 0);
	assert (resultado1[27] == 0);
	assert (resultado1[26] == 0);
	assert (resultado1[25] == 0);
	assert (resultado1[24] == 0);
	assert (resultado1[23] == 0);
	assert (resultado1[22] == 0);
	assert (resultado1[21] == 0);
	assert (resultado1[20] == 0);
	assert (resultado1[19] == 0);
	assert (resultado1[18] == 0);
	assert (resultado1[17] == 0);
	assert (resultado1[16] == 0);
	assert (resultado1[15] == 0);
	assert (resultado1[14] == 0);
	assert (resultado1[13] == 0);
	assert (resultado1[12] == 1);
	assert (resultado1[11] == 0);
	assert (resultado1[10] == 0);
	assert (resultado1[9] == 0);
    
     
}
