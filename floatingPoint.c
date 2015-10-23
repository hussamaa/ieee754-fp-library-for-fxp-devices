#include<stdio.h>
#include <floatingPoint.h>


int main(){
   int signal1, signal2;
   printf("Enter the first number binary: \n");
   for (i = 0; i <= 31; i++) scanf("%d", &number1[i]);
   printf("Enter the second number binary: \n");
   for (i = 0 ; i <= 31; i++) scanf("%d", &number2[i]);

   //First number's exponent

    e1 =  convert_binary(number1);

     //Second number's exponent

    e2 = convert_binary(number2);

    Decimal = e1 + e2 + 1;

    //left Shift

if( e1 >= e2 ){

    signal1 = number1[0];
    signal2 = number2[0];

    decimalExponent = e1 - e2;

    shift_left(decimalExponent,number1);

    //right Shift - Normalization


    rightSize -= 1;

    for(i = rightSize; i <= 31;i ++ ) rightnumber1[i] = 0;


    //Sum of part integer in binary

    j = rightRight + decimalExponent;
    if(signal1 != signal2)subtraction_binary( rightnumber1, number2, j );
    else
    som_binaryInteger( rightnumber1, number2, j);

    //Sum of part  fraction in binary

    leftnumber1[0] = 1;

    j = decimalExponent + 1;

    for ( i = 0 ;i <= rightSize + decimalExponent; i++ ){

        leftnumber1[j] = rightnumber1[i];
         j++;

         }
    //size of array

    p = rightSize + decimalExponent+1;

    //to save full array

     j = 1;
     leftnumber2[0] = 1;

     for (i = 9;i <= 31; i++ ) {

          leftnumber2[j] = number2[i];
          j++;

     }

     //size of array

     q = j - 1;



    if (signal1 != signal2) subtraction_integer(leftnumber1);
    else som_fractional(leftnumber1);



   size = decimalExponent;
     printf("\n%d\n",size);
   result10 =  convert_decimalBinary(result1,size,e2);

   printf("\n\nResultado da Adicao em Decimal: ");
   printf("%f",result10);
     printf("\n%f\n",decimalResult);
   for(i = 0;i <= 31 ;i++) printf("%d ", result1[i]);
    }

    else{

        decimalExponentl = e2 - e1;

        shift_left(decimalExponentl,number2);




        rightSize-= 1;

        for(i = rightSize; i <= 31;i ++ ) rightnumber1[i] = 0;


        j = rightSize + decimalExponent;
        if (signal1 != signal2)subtracty_binary(rightnumber1,number1,j);
        else som_binaryInteger(rightSize1,number1,j);


        leftnumber1[0] = 1;

        j = decimalExponent + 1;

        for ( i = 0 ;i <= rightSize + decimalExponent; i++ ){

             leftnumber1[j] = rightnumber1[i];
             j++;

             }

        p = rightSize + DecimalExponent+1;



         j = 1;
        leftnumber2[0] = 1;

         for (i = 9;i <= 31; i++ ) {

              leftnumber2[j] = number1[i];
              j++;

            }



         q = j - 1;


           if (signal1 != signal2) subtraction_integer(leftnumber1);
           else soma_fracionario(leftnumber1);



        size = decimalExponent;
/*
       resultadoDec = conversao_binarioDecimal(resultado1,tamanho,e1);
       printf("\n\nResultado da Adicao em Decimal: ");
       printf("%f",resultadoDec);

*/

       for(i = 0;i <= size ;i++) printf("%d ", result1[i]);
    }

    return 0;

}



