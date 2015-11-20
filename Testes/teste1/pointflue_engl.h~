#include <math.h>
#include<stdio.h>
#include<string.h>

   int op,i,k,decimal;
   int size,base,vIEEE[8],decimalEXponent,resultIEEE;
   int e1, e2, j, rightnumber1[32],leftnumber1[32], rightnumber2[32],leftnumber2[32];
   int rightSize,number1[24],number2[24],leftSize,result,result1[32],ma[32],result2[32],carry;
  // int number1[32],number2[32];
   int q,p,DecimalResult;
   int sum[32],shift,c[64];
   float fractionalBase,result10,fractionalResult;


int convert_binary(int number[]){

   	size = 1;
    resultIEEE = 0;

    while( size <= 8 ){

        base = pow(2,8-size);
        resultIEEE += number[size] * base;
        size++;

    }

    e1 = resultIEEE - 127;

    return e1;

}
/*
int shift_left(int decimalExponent,int number[]){

     j = 0;

     for( i = decimalExponent + 9; i <= 31; i++){

         rightnumber1[j] = number[i];
         j++;

          }

          rightSize = j;
          j = 1;

        for(i = 9 ; i < decimalExponent + 9; i++){

                leftnumber = j;
                leftnumber1[j] = number[i];
                j++;

           }


}

void addition_binaryInteger(int rightnumber1[],int number[],int j){

        carry = 0;
        result = 0;

        j = rightSize + decimalExponent;

        for( i = 31; i >= 9; i-- ){

            result = rightnumber1[j] + number[i] + carry;
            result1[i] = result % 2;
            carry =  result / 2;
            j--;

           }


}


void multiplication_binary(int number1[],int number2[],int p,int q){

           memset(c,0,sizeof(c));

           for (i = 1 ; i <= p; i++ ){

                carry = 0;

                for (j = 1 ; j <= q; j++ ){

                    c[i + j - 1] += carry +number1[i] * number2[j];
                    carry = c[i + j - 1] / 2;
                    c[i + j - 1] =  c[i + j - 1] % 2 ;

                   }

               c[i+p] += carry;

           }

}

void addition_fractional(int leftnumber1[]){


          result = 0;
          j = decimalExponent;

          k = 1;
         printf("\nInteiro:\n");

         for( i = decimalExponent; i >= 0; i-- ){

            result = leftnumber1[j] + k + carry;
            result1[i] = result % 2;
            carry = result/ 2;
            j--;
            k = 0;

         }

}

float convert_decimalBinary(int size1[],int size, int e2){

        decimalResult = 0;
        i = 0;

        while( size <= decimalExponent && size >= 0 ){

             fractionalBase= pow(2,i);
             decimalResult += result1[tamanho] * fractionalBase;
             size--;
             i++;

           }

        i = -1;
        size = 12;
        fractionalResult = 0.0;
        result10 = 0.0;

        while( size <= 31 ){

              fractionalBase = pow(2,i);
              fractionalResult += result1[tamanho] * fractionalBase;
              tamanho++;
              i--;

        }

       result10 = (decimalResult + fractionalResult)*pow(2,e2);

       return result10;


       }

void subtraction_binary(int rightnumber[],int number[],int j){


        carry = 0;
        result = 0;


        for( i = 31; i >= 9; i-- ){

            result = rightnumber[j] - number[i] - carry;

            if(result < 0){
            result1[i] = 1;
            carry = 1;
            }
            else {
                result1[i] = result;
                carry = 0;
                }

            j--;

           }
       }

void subtraction_integer(int leftnumber[]){



          result = 0;
          j = expoenteDecimal;

          k = 1;

         for( i = decimalExponent; i >= 0; i-- ){

            result = leftnumber[j] - k - carry;
            if(result < 0 ){

                result1[i] = 1;
                carry = 1;
            }
            else {
                    result1[i] = result;
            carry = 0;}
            j--;
            k = 0;

         }

}
*/
