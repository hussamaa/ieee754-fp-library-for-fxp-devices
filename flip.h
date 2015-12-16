#include <math.h>
#include <stdio.h>
#include <string.h>

  int fp_convert_binary(int number[])
  {
    int size, resultIEEE, base, e1;
    resultIEEE = 0;
    size = 1;
    while(size <= 8){
      base = pow(2,8-size);
      resultIEEE += number[size] * base;
      size++;
    }
    e1 = resultIEEE - 127;
    return e1;
  }

  int fp_shift_left(int decimalExponent, int number[])
  {
    int i, j;
    int rightSize,leftnumber;
    int rightnumber1[32],leftnumber1[32];
    j = 0;
    for(i = decimalExponent + 9; i <= 31; i++){
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

  void fp_addition_binaryInteger(int rightnumber1[], int number[], int j)
  {
    int rightSize, decimalExponent, result;
    int result1[32], i, j;
    int carry, result;
    result = 0;
    carry = 0;
    j = rightSize + decimalExponent;
    for(i = 31; i >= 9; i--){
      result = rightnumber1[j] + number[i] + carry;
      result1[i] = result % 2;
      carry =  result / 2;
      j--;
    }
  }

  void fp_multiplication_binary(int number1[],int number2[],int p,int q)
  {
    int carry, c[64];
    int i, j;
    memset(c,0,sizeof(c));
    for (i = 1 ; i <= p; i++ ){
    carry = 0;
      for (j = 1 ; j <= q; j++ ){
        c[i + j - 1] += carry + number1[i] * number2[j];
        carry = c[i + j - 1] / 2;
        c[i + j - 1] =  c[i + j - 1] % 2 ;
      }
    c[i+p] += carry;
    }
  }

  void fp_addition_fractional(int leftnumber1[])
  {
    int result, i, k, j;
    result = 0;
    k = 1;
    j = decimalExponent;
    for(i = decimalExponent; i >= 0; i--){
      result = leftnumber1[j] + k + carry;
      result1[i] = result % 2;
      carry = result / 2;
      j--;
      k = 0;
    }
  }

  float fp_convert_decimalBinary(int size1[], int size, int e2)
  {
    float fractionalBase, fractionalResult, result10;
    float cs;
    int decimalResult, result1[32], tamanho;
    int decimalResult, i;
    decimalResult = 0;
    cs = 0.0; 
    i = 1;
    while(size >= 0){
      fractionalBase = cs;
      decimalResult += result1[tamanho] * fractionalBase;
      cs = pow(2,i);
      size--;
      i++;
    }
    i = -1;
    size = 9;
    fractionalResult = 0.0;
    result10 = 0.0;
    while( size <= 31 ){
      fractionalBase = 1/(2*i);
      fractionalResult += result1[tamanho] * fractionalBase;
      tamanho++;
      i--;
    }
    result10 = (decimalResult + fractionalResult)*pow(2,e2);
    return result10;
  }

  void fp_subtraction_binary(int rightnumber[], int number[], int j)
  {
    int result, result1[32], i;
    int carry,result;
    result = 0;
    carry = 0;
    for(i = 31; i >= 9; i--){
      result = rightnumber[j] - number[i] - carry;
      if(result < 0){
        result1[i] = 1;
        carry = 1;
      }
      else{
        result1[i] = result;
        carry = 0;
      }
      j--;
    }
  }

  void fp_subtraction_integer(int leftnumber[])
  {
    int decimalEXponent,carry,result1[32];
    int result, k, j;
    j = expoenteDecimal;
    result = 0;
    k = 1;
    for( i = decimalExponent; i >= 0; i-- ){
      result = leftnumber[j] - k - carry;
      if(result < 0 ){
        result1[i] = 1;
        carry = 1;
      }
      else {
        result1[i] = result;
        carry = 0;
      }
      j--;
      k = 0;
    }
  }
